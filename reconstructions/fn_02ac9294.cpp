extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025e6eb4(void*, const void*);

extern "C" void* fn_02ac9294(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(304, allocator, 4);
    if (object) {
        object = fn_025e6eb4(object, descriptor);
    }
    return object;
}
