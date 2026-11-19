extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026b7874(void*, const void*);

extern "C" void* fn_02ad0ff4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(268, allocator, 4);
    if (object) {
        object = fn_026b7874(object, descriptor);
    }
    return object;
}
