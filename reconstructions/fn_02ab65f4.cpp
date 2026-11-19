extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021ff41c(void*, const void*);

extern "C" void* fn_02ab65f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_021ff41c(object, descriptor);
    }
    return object;
}
