extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022f6e3c(void*, const void*);

extern "C" void* fn_02abc220(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_022f6e3c(object, descriptor);
    }
    return object;
}
