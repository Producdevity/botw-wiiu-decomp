extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d5f58(void*, const void*);

extern "C" void* fn_02aadc18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(472, allocator, 4);
    if (object) {
        object = fn_020d5f58(object, descriptor);
    }
    return object;
}
