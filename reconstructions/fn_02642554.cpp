typedef void* (*Getter)(void*);

extern "C" bool fn_02642554(void* self) {
    void* const* vtable = *(void* const* const*)((char*)self + 12);
    void* first = ((Getter)vtable[53])(self);
    if (first) {
        vtable = *(void* const* const*)((char*)first + 12);
        if (((Getter)vtable[9])(first))
            return true;
    }
    return false;
}
