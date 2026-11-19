extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cdf69c(void*, const void*);

extern "C" void* fn_02ac0ff4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02cdf69c(object, descriptor);
    }
    return object;
}
