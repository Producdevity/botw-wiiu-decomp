typedef void* (*Getter)(void*);

extern "C" bool fn_026424f0(void* self) {
    void* const* vtable = *(void* const* const*)((char*)self + 12);
    void* first = ((Getter)vtable[212 / 4])(self);
    if (first) {
        vtable = *(void* const* const*)((char*)first + 12);
        if (((Getter)vtable[44 / 4])(first))
            return true;
    }
    return false;
}
