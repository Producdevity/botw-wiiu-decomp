extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03509244(void*, const void*);

extern "C" void* fn_02aac93c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_03509244(object, descriptor);
    }
    return object;
}
