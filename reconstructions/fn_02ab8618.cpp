extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022442d8(void*, const void*);

extern "C" void* fn_02ab8618(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_022442d8(object, descriptor);
    }
    return object;
}
