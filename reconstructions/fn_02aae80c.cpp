extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f9ac0(void*, const void*);

extern "C" void* fn_02aae80c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_020f9ac0(object, descriptor);
    }
    return object;
}
