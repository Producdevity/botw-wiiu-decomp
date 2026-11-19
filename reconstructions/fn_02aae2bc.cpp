extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ef198(void*, const void*);

extern "C" void* fn_02aae2bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_020ef198(object, descriptor);
    }
    return object;
}
