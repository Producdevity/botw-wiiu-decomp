extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0274d634(void*, const void*);

extern "C" void* fn_02ad2e3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0274d634(object, descriptor);
    }
    return object;
}
