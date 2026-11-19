extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0287916c(void*, const void*);

extern "C" void* fn_02ad71f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0287916c(object, descriptor);
    }
    return object;
}
