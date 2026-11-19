extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021edea4(void*, const void*);

extern "C" void* fn_02ab58ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_021edea4(object, descriptor);
    }
    return object;
}
