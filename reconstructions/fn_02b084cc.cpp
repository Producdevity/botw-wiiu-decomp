extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a42908(void*, const void*);

extern "C" void* fn_02b084cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02a42908(object, descriptor);
    }
    return object;
}
