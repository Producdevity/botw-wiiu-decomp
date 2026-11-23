typedef void (*Action)(void*);

extern "C" unsigned fn_02dd9af8(void* p) {
    char* object = (char*)p + 92;
    void* const* vtable = *(void* const* const*)((char*)p + 96);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
