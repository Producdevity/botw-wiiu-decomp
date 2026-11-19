extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0297c4b0(void*, const void*);

extern "C" void* fn_02acb560(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_0297c4b0(object, descriptor);
    }
    return object;
}
