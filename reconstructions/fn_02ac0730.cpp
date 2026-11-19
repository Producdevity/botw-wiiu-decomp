extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cbfe8c(void*, const void*);

extern "C" void* fn_02ac0730(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02cbfe8c(object, descriptor);
    }
    return object;
}
