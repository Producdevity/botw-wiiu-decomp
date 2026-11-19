extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021ed2e4(void*, const void*);

extern "C" void* fn_02ab57e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_021ed2e4(object, descriptor);
    }
    return object;
}
