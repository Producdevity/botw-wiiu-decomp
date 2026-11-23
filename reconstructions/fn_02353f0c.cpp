typedef void (*Action)(void*);

extern "C" unsigned fn_02353f0c(void* p) {
    char* object = (char*)p + 72;
    void* const* vtable = *(void* const* const*)((char*)p + 76);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
