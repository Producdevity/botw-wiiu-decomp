extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02359f2c(void*, const void*);

extern "C" void* fn_02abeac4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_02359f2c(object, descriptor);
    }
    return object;
}
