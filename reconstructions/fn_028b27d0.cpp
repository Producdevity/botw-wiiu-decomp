typedef bool (*Query)(void*);

extern "C" bool fn_028b27d0(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 12);
    return !((Query)vtable[111])(p);
}
