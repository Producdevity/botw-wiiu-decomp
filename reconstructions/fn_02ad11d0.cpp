extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c4180(void*, const void*);

extern "C" void* fn_02ad11d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_026c4180(object, descriptor);
    }
    return object;
}
