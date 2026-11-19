extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0235722c(void*, const void*);

extern "C" void* fn_02aad0ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0235722c(object, descriptor);
    }
    return object;
}
