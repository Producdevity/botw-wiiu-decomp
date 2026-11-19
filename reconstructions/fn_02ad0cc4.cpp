extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026a6a20(void*, const void*);

extern "C" void* fn_02ad0cc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_026a6a20(object, descriptor);
    }
    return object;
}
