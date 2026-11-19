extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f37b0(void*, const void*);

extern "C" void* fn_02acde8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_025f37b0(object, descriptor);
    }
    return object;
}
