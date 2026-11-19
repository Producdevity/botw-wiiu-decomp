extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021bd8dc(void*, const void*);

extern "C" void* fn_02ab4218(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021bd8dc(object, descriptor);
    }
    return object;
}
