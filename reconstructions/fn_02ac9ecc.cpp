extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024eed00(void*, const void*);

extern "C" void* fn_02ac9ecc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_024eed00(object, descriptor);
    }
    return object;
}
