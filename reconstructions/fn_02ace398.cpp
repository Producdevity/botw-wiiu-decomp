extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02604f6c(void*, const void*);

extern "C" void* fn_02ace398(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1480, allocator, 4);
    if (object) {
        object = fn_02604f6c(object, descriptor);
    }
    return object;
}
