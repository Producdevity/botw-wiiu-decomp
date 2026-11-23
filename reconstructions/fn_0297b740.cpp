typedef void (*Action)(void*);
extern "C" void fn_03670228(void* object);

extern "C" void fn_0297b740(void* p) {
    fn_03670228((char*)p + 48);
    void* object = *(void**)p;
    ((Action)(*(void* const* const*)((char*)object + 232))[215])(object);
}
