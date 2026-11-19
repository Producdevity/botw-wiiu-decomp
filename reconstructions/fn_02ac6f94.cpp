extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024520b8(void*, const void*);

extern "C" void* fn_02ac6f94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_024520b8(object, descriptor);
    }
    return object;
}
