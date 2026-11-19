extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028feaac(void*, const void*);

extern "C" void* fn_02ad8eec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_028feaac(object, descriptor);
    }
    return object;
}
