extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cd2728(void*, const void*);

extern "C" void* fn_02ac0ae8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cd2728(object, descriptor);
    }
    return object;
}
