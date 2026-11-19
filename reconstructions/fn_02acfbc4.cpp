extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0265a698(void*, const void*);

extern "C" void* fn_02acfbc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_0265a698(object, descriptor);
    }
    return object;
}
