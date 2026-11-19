extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0235ed04(void*, const void*);

extern "C" void* fn_02ac13ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(208, allocator, 4);
    if (object) {
        object = fn_0235ed04(object, descriptor);
    }
    return object;
}
