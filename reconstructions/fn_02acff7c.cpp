extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02667250(void*, const void*);

extern "C" void* fn_02acff7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_02667250(object, descriptor);
    }
    return object;
}
