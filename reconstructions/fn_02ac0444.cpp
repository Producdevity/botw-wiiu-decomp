extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0235e100(void*, const void*);

extern "C" void* fn_02ac0444(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_0235e100(object, descriptor);
    }
    return object;
}
