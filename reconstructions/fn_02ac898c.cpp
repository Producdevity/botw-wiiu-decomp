extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03271b3c(void*, const void*);

extern "C" void* fn_02ac898c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_03271b3c(object, descriptor);
    }
    return object;
}
