extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020e9164(void*, const void*);

extern "C" void* fn_02aae124(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(288, allocator, 4);
    if (object) {
        object = fn_020e9164(object, descriptor);
    }
    return object;
}
