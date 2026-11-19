extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021293c4(void*, const void*);

extern "C" void* fn_02aaf510(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_021293c4(object, descriptor);
    }
    return object;
}
