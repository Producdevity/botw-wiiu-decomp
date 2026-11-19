extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0256d86c(void*, const void*);

extern "C" void* fn_02acc594(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(356, allocator, 4);
    if (object) {
        object = fn_0256d86c(object, descriptor);
    }
    return object;
}
