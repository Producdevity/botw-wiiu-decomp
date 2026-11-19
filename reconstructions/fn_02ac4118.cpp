extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023bd970(void*, const void*);

extern "C" void* fn_02ac4118(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(240, allocator, 4);
    if (object) {
        object = fn_023bd970(object, descriptor);
    }
    return object;
}
