extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0282297c(void*, const void*);

extern "C" void* fn_02ad5cfc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(880, allocator, 4);
    if (object) {
        object = fn_0282297c(object, descriptor);
    }
    return object;
}
