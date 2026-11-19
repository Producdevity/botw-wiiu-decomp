extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02374324(void*, const void*);

extern "C" void* fn_02ac217c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(488, allocator, 4);
    if (object) {
        object = fn_02374324(object, descriptor);
    }
    return object;
}
