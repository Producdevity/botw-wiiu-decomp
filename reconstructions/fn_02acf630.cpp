extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0264b5f8(void*, const void*);

extern "C" void* fn_02acf630(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0264b5f8(object, descriptor);
    }
    return object;
}
