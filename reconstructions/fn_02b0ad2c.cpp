extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02aa54ac(void*, const void*);

extern "C" void* fn_02b0ad2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02aa54ac(object, descriptor);
    }
    return object;
}
