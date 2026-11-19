extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020fefbc(void*, const void*);

extern "C" void* fn_02aae740(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_020fefbc(object, descriptor);
    }
    return object;
}
