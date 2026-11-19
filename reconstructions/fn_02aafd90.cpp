extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bc3824(void*, const void*);

extern "C" void* fn_02aafd90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(484, allocator, 4);
    if (object) {
        object = fn_02bc3824(object, descriptor);
    }
    return object;
}
