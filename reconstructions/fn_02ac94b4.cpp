extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024cbfb8(void*, const void*);

extern "C" void* fn_02ac94b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_024cbfb8(object, descriptor);
    }
    return object;
}
