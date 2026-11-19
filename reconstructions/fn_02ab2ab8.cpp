extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02180fbc(void*, const void*);

extern "C" void* fn_02ab2ab8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_02180fbc(object, descriptor);
    }
    return object;
}
