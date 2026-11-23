typedef bool (*Query)(void*);

extern "C" bool fn_025bdbf0(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 12);
    return !((Query)vtable[83])(p);
}
