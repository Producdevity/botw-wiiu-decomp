extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03268a54(void*, const void*);

extern "C" void* fn_02aab1dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_03268a54(object, descriptor);
    }
    return object;
}
