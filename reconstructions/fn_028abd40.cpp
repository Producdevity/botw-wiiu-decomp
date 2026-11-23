typedef bool (*Query)(void*);

extern "C" bool fn_028abd40(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 12);
    return !((Query)vtable[111])(p);
}
