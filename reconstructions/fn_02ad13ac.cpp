extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c7cac(void*, const void*);

extern "C" void* fn_02ad13ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(196, allocator, 4);
    if (object) {
        object = fn_026c7cac(object, descriptor);
    }
    return object;
}
