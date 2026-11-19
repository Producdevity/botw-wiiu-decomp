extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250941c(void*, const void*);

extern "C" void* fn_02aca63c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0250941c(object, descriptor);
    }
    return object;
}
