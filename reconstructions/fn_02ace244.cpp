extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02600810(void*, const void*);

extern "C" void* fn_02ace244(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(208, allocator, 4);
    if (object) {
        object = fn_02600810(object, descriptor);
    }
    return object;
}
