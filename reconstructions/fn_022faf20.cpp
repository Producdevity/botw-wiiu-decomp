typedef void (*Action)(void*);

extern "C" unsigned fn_022faf20(void* p) {
    char* object = (char*)p + 24;
    void* const* vtable = *(void* const* const*)((char*)p + 28);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
