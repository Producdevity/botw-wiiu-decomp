extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022064d8(void*, const void*);

extern "C" void* fn_02ab68e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(244, allocator, 4);
    if (object) {
        object = fn_022064d8(object, descriptor);
    }
    return object;
}
