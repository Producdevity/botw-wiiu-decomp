extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f452c(void*, const void*);

extern "C" void* fn_02acded0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_025f452c(object, descriptor);
    }
    return object;
}
