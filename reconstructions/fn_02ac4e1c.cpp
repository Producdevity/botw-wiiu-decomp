extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ec040(void*, const void*);

extern "C" void* fn_02ac4e1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_023ec040(object, descriptor);
    }
    return object;
}
