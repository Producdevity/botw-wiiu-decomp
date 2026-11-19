extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024c3be8(void*, const void*);

extern "C" void* fn_02ac9140(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_024c3be8(object, descriptor);
    }
    return object;
}
