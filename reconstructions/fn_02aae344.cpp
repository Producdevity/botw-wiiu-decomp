extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f1fc4(void*, const void*);

extern "C" void* fn_02aae344(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_020f1fc4(object, descriptor);
    }
    return object;
}
