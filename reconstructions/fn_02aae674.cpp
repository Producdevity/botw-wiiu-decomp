extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020fd034(void*, const void*);

extern "C" void* fn_02aae674(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_020fd034(object, descriptor);
    }
    return object;
}
