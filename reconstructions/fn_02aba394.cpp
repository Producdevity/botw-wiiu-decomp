extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022957c4(void*, const void*);

extern "C" void* fn_02aba394(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_022957c4(object, descriptor);
    }
    return object;
}
