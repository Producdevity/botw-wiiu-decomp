extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02436a20(void*, const void*);

extern "C" void* fn_02ac65c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(200, allocator, 4);
    if (object) {
        object = fn_02436a20(object, descriptor);
    }
    return object;
}
