extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ce2d7c(void*, const void*);

extern "C" void* fn_02ac118c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02ce2d7c(object, descriptor);
    }
    return object;
}
