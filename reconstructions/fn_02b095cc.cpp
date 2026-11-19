extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a6c728(void*, const void*);

extern "C" void* fn_02b095cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a6c728(object, descriptor);
    }
    return object;
}
