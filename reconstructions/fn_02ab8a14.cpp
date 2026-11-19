extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022521fc(void*, const void*);

extern "C" void* fn_02ab8a14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_022521fc(object, descriptor);
    }
    return object;
}
