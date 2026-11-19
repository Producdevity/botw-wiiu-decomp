extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ed070(void*, const void*);

extern "C" void* fn_02aacb5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_020ed070(object, descriptor);
    }
    return object;
}
