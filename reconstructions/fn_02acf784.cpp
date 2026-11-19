extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0264e2b0(void*, const void*);

extern "C" void* fn_02acf784(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_0264e2b0(object, descriptor);
    }
    return object;
}
