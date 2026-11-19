extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0206ac24(void*, const void*);

extern "C" void* fn_02aadca0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0206ac24(object, descriptor);
    }
    return object;
}
