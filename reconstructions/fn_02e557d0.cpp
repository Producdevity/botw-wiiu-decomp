struct Opaque_02e557d0 {
    float x;
    float y;
    float z;
};

extern "C" const float data_10216154;
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_02e55664(Opaque_02e557d0* self, const Opaque_02e557d0* source);

extern "C" Opaque_02e557d0* fn_02e557d0(Opaque_02e557d0* storage, const Opaque_02e557d0* source) {
    if (!storage) {
        storage = static_cast<Opaque_02e557d0*>(fn_0308e578(12));
        if (!storage) {
            return 0;
        }
    }
    storage->y = data_10216154;
    storage->z = data_10216154;
    fn_02e55664(storage, source);
    return storage;
}
