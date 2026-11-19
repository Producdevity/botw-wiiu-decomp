extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025de08c(void*, const void*);

extern "C" void* fn_02acdc28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(220, allocator, 4);
    if (object) {
        object = fn_025de08c(object, descriptor);
    }
    return object;
}
