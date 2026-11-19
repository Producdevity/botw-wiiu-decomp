extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023aee6c(void*, const void*);

extern "C" void* fn_02ac3c94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_023aee6c(object, descriptor);
    }
    return object;
}
