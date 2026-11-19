extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020e8d10(void*, const void*);

extern "C" void* fn_02aae0e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(248, allocator, 4);
    if (object) {
        object = fn_020e8d10(object, descriptor);
    }
    return object;
}
