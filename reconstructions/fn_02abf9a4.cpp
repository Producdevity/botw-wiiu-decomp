extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c909ac(void*, const void*);

extern "C" void* fn_02abf9a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c909ac(object, descriptor);
    }
    return object;
}
