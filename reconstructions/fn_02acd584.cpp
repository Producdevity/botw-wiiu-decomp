extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025b5654(void*, const void*);

extern "C" void* fn_02acd584(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_025b5654(object, descriptor);
    }
    return object;
}
