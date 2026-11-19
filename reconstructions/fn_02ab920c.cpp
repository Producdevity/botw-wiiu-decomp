extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02261780(void*, const void*);

extern "C" void* fn_02ab920c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_02261780(object, descriptor);
    }
    return object;
}
