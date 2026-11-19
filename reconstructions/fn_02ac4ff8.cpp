extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023f29d8(void*, const void*);

extern "C" void* fn_02ac4ff8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_023f29d8(object, descriptor);
    }
    return object;
}
