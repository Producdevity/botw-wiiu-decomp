extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028b161c(void*, const void*);

extern "C" void* fn_02ad822c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(312, allocator, 4);
    if (object) {
        object = fn_028b161c(object, descriptor);
    }
    return object;
}
