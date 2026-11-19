extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c6e6fc(void*, const void*);

extern "C" void* fn_02abf1ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02c6e6fc(object, descriptor);
    }
    return object;
}
