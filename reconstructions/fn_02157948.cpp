typedef void (*Action)(void*);

extern "C" bool fn_02157948(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 12);
    ((Action)vtable[65])(p);
    return true;
}
