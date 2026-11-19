extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d5628(void*, const void*);

extern "C" void* fn_02aadbd4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_020d5628(object, descriptor);
    }
    return object;
}
