extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0229ef84(void*, const void*);

extern "C" void* fn_02aba8e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0229ef84(object, descriptor);
    }
    return object;
}
