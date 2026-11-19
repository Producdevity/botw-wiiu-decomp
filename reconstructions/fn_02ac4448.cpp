extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023c9490(void*, const void*);

extern "C" void* fn_02ac4448(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_023c9490(object, descriptor);
    }
    return object;
}
