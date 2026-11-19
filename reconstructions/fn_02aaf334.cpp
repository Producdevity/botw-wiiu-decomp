extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02121e24(void*, const void*);

extern "C" void* fn_02aaf334(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_02121e24(object, descriptor);
    }
    return object;
}
