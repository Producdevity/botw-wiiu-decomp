extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023f3b38(void*, const void*);

extern "C" void* fn_02ac503c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_023f3b38(object, descriptor);
    }
    return object;
}
