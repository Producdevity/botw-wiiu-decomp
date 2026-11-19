extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0280e7cc(void*, const void*);

extern "C" void* fn_02ad5834(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0280e7cc(object, descriptor);
    }
    return object;
}
