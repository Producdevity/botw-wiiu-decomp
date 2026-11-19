extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ab56c(void*, const void*);

extern "C" void* fn_02abaf44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(240, allocator, 4);
    if (object) {
        object = fn_022ab56c(object, descriptor);
    }
    return object;
}
