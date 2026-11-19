extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02628f84(void*, const void*);

extern "C" void* fn_02acedf4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02628f84(object, descriptor);
    }
    return object;
}
