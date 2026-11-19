extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a4d9bc(void*, const void*);

extern "C" void* fn_02b087fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a4d9bc(object, descriptor);
    }
    return object;
}
