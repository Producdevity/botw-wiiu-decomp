typedef void (*Action)(void*);

extern "C" bool fn_027f0ce8(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 12);
    ((Action)vtable[19])(p);
    return true;
}
