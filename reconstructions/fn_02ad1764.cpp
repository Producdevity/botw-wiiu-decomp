extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026d1dd4(void*, const void*);

extern "C" void* fn_02ad1764(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_026d1dd4(object, descriptor);
    }
    return object;
}
