typedef void (*Action)(void*);

extern "C" unsigned fn_039ceff4(void* p) {
    char* object = (char*)p + 112;
    void* const* vtable = *(void* const* const*)((char*)p + 116);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
