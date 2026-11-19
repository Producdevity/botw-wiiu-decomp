extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026a6fe4(void*, const void*);

extern "C" void* fn_02ad0d4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_026a6fe4(object, descriptor);
    }
    return object;
}
