extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250d77c(void*, const void*);

extern "C" void* fn_02aca7d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0250d77c(object, descriptor);
    }
    return object;
}
