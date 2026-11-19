extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cd5d58(void*, const void*);

extern "C" void* fn_02ac0c80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cd5d58(object, descriptor);
    }
    return object;
}
