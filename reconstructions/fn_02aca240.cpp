extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02500600(void*, const void*);

extern "C" void* fn_02aca240(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(556, allocator, 4);
    if (object) {
        object = fn_02500600(object, descriptor);
    }
    return object;
}
