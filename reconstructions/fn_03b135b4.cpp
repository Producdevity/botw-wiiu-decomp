// Inferred address-word storage preserves aliasing between elements and the header.
struct AddressArray {
    unsigned capacity;
    unsigned storageAddress;

    unsigned& at(unsigned index) {
        if (index < capacity)
            return reinterpret_cast<unsigned*>(storageAddress)[index];
        return reinterpret_cast<unsigned*>(storageAddress)[0];
    }
};

extern "C" void fn_03b135b4(AddressArray* self, unsigned left, unsigned right) {
    unsigned temporary = self->at(left);
    self->at(left) = self->at(right);
    self->at(right) = temporary;
}
