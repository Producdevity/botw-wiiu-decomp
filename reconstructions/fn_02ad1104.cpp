extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c0fd4(void*, const void*);

extern "C" void* fn_02ad1104(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_026c0fd4(object, descriptor);
    }
    return object;
}
