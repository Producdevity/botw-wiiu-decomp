extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d7a00(void*, const void*);

extern "C" void* fn_02ab4e94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_021d7a00(object, descriptor);
    }
    return object;
}
