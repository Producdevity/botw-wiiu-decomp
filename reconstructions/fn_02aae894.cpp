extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02104cac(void*, const void*);

extern "C" void* fn_02aae894(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02104cac(object, descriptor);
    }
    return object;
}
