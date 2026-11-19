extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026a63a0(void*, const void*);

extern "C" void* fn_02ad0c80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_026a63a0(object, descriptor);
    }
    return object;
}
