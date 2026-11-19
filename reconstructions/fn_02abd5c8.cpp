extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0232bfe8(void*, const void*);

extern "C" void* fn_02abd5c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(256, allocator, 4);
    if (object) {
        object = fn_0232bfe8(object, descriptor);
    }
    return object;
}
