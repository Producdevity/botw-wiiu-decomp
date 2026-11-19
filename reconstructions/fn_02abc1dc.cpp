extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022f611c(void*, const void*);

extern "C" void* fn_02abc1dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_022f611c(object, descriptor);
    }
    return object;
}
