extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02652aec(void*, const void*);

extern "C" void* fn_02acf894(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_02652aec(object, descriptor);
    }
    return object;
}
