typedef void (*Action)(void*);

extern "C" unsigned fn_0223d524(void* p) {
    char* object = (char*)p + 52;
    void* const* vtable = *(void* const* const*)((char*)p + 56);
    ((Action)vtable[7])(object);
    return *(unsigned*)object;
}
