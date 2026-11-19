extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03260c80(void*, const void*);

extern "C" void* fn_02aaae24(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_03260c80(object, descriptor);
    }
    return object;
}
