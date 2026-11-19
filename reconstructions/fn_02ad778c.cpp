extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0288ebf0(void*, const void*);

extern "C" void* fn_02ad778c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0288ebf0(object, descriptor);
    }
    return object;
}
