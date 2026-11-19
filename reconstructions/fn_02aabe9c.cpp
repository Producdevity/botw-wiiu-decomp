extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0326abec(void*, const void*);

extern "C" void* fn_02aabe9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0326abec(object, descriptor);
    }
    return object;
}
