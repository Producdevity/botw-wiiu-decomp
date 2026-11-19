extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230924c(void*, const void*);

extern "C" void* fn_02ab9a04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_0230924c(object, descriptor);
    }
    return object;
}
