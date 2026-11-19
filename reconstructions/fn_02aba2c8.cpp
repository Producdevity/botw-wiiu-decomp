extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02286098(void*, const void*);

extern "C" void* fn_02aba2c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(660, allocator, 4);
    if (object) {
        object = fn_02286098(object, descriptor);
    }
    return object;
}
