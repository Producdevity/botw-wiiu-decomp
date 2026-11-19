extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029ab16c(void*, const void*);

extern "C" void* fn_02adbd24(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(340, allocator, 4);
    if (object) {
        object = fn_029ab16c(object, descriptor);
    }
    return object;
}
