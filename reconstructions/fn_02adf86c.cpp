extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d7220(void*, const void*);

extern "C" void* fn_02adf86c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029d7220(object, descriptor);
    }
    return object;
}
