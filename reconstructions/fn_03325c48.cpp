typedef void (*Action)(void*);

extern "C" unsigned fn_03325c48(void* p) {
    char* object = (char*)p + 28;
    void* const* vtable = *(void* const* const*)((char*)p + 32);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
