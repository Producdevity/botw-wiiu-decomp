extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0229d21c(void*, const void*);

extern "C" void* fn_02aba790(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0229d21c(object, descriptor);
    }
    return object;
}
