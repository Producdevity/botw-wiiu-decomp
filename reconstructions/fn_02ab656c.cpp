extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021fdfc8(void*, const void*);

extern "C" void* fn_02ab656c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_021fdfc8(object, descriptor);
    }
    return object;
}
