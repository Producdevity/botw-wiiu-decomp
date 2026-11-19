extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032d8088(void*, const void*);

extern "C" void* fn_02ac8a58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(256, allocator, 4);
    if (object) {
        object = fn_032d8088(object, descriptor);
    }
    return object;
}
