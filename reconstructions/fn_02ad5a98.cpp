extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02817644(void*, const void*);

extern "C" void* fn_02ad5a98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_02817644(object, descriptor);
    }
    return object;
}
