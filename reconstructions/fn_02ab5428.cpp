extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021dfb70(void*, const void*);

extern "C" void* fn_02ab5428(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_021dfb70(object, descriptor);
    }
    return object;
}
