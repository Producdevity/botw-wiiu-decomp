typedef void (*Action)(void*, void*);

extern "C" void fn_02c33548(void* p) {
    char* self = (char*)p;
    void* target = *(void**)(self + 8);
    ((Action)(*(void* const* const*)((char*)target + 8))[11])(target, *(void**)(self + 4));
    *(int*)(self + 12) += 1;
}
