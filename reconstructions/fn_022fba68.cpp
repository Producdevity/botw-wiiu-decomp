typedef void (*Action)(void*);

extern "C" unsigned fn_022fba68(void* p) {
    char* object = (char*)p + 44;
    void* const* vtable = *(void* const* const*)((char*)p + 48);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
