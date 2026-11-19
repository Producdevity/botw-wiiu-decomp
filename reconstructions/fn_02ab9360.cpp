extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02266c2c(void*, const void*);

extern "C" void* fn_02ab9360(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02266c2c(object, descriptor);
    }
    return object;
}
