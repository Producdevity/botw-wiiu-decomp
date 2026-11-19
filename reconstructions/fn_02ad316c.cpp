extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0275c9fc(void*, const void*);

extern "C" void* fn_02ad316c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_0275c9fc(object, descriptor);
    }
    return object;
}
