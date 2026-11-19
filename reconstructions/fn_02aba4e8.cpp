extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022980d4(void*, const void*);

extern "C" void* fn_02aba4e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_022980d4(object, descriptor);
    }
    return object;
}
