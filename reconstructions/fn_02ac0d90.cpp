extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cd93b0(void*, const void*);

extern "C" void* fn_02ac0d90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02cd93b0(object, descriptor);
    }
    return object;
}
