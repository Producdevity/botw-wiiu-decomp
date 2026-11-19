extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021ecdd0(void*, const void*);

extern "C" void* fn_02ab579c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021ecdd0(object, descriptor);
    }
    return object;
}
