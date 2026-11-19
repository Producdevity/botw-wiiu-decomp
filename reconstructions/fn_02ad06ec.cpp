extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02688a88(void*, const void*);

extern "C" void* fn_02ad06ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_02688a88(object, descriptor);
    }
    return object;
}
