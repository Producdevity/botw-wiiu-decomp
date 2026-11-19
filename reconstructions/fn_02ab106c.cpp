extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0214d744(void*, const void*);

extern "C" void* fn_02ab106c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0214d744(object, descriptor);
    }
    return object;
}
