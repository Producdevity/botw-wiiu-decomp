extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0288368c(void*, const void*);

extern "C" void* fn_02ad745c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0288368c(object, descriptor);
    }
    return object;
}
