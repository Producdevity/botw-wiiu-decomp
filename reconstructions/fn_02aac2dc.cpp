extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_031b00a8(void*, const void*);

extern "C" void* fn_02aac2dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_031b00a8(object, descriptor);
    }
    return object;
}
