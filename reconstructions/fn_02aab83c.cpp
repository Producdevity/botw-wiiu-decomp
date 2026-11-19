extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03269c7c(void*, const void*);

extern "C" void* fn_02aab83c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_03269c7c(object, descriptor);
    }
    return object;
}
