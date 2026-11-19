extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d9458(void*, const void*);

extern "C" void* fn_02ab4f60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_021d9458(object, descriptor);
    }
    return object;
}
