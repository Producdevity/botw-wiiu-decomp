extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c4080(void*, const void*);

extern "C" void* fn_02aad4a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_020c4080(object, descriptor);
    }
    return object;
}
