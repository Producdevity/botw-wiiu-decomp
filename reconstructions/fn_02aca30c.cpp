extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024ff414(void*, const void*);

extern "C" void* fn_02aca30c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_024ff414(object, descriptor);
    }
    return object;
}
