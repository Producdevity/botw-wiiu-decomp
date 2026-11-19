extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0266615c(void*, const void*);

extern "C" void* fn_02acfde4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(344, allocator, 4);
    if (object) {
        object = fn_0266615c(object, descriptor);
    }
    return object;
}
