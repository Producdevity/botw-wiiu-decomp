typedef void (*Action)(void*);

extern "C" unsigned fn_021ead14(void* p) {
    char* object = (char*)p + 40;
    void* const* vtable = *(void* const* const*)((char*)p + 44);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
