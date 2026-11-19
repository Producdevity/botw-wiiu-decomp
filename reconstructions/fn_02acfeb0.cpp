extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0266068c(void*, const void*);

extern "C" void* fn_02acfeb0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(564, allocator, 4);
    if (object) {
        object = fn_0266068c(object, descriptor);
    }
    return object;
}
