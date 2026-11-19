extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225e75c(void*, const void*);

extern "C" void* fn_02ab9030(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(440, allocator, 4);
    if (object) {
        object = fn_0225e75c(object, descriptor);
    }
    return object;
}
