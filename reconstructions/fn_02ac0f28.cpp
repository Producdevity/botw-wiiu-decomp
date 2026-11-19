extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0235e6a8(void*, const void*);

extern "C" void* fn_02ac0f28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_0235e6a8(object, descriptor);
    }
    return object;
}
