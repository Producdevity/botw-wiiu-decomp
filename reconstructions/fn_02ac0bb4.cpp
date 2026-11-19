extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cd3e00(void*, const void*);

extern "C" void* fn_02ac0bb4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02cd3e00(object, descriptor);
    }
    return object;
}
