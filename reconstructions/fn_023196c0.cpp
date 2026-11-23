typedef void (*Action)(void*);

extern "C" unsigned fn_023196c0(void* p) {
    char* object = (char*)p + 120;
    void* const* vtable = *(void* const* const*)((char*)p + 124);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
