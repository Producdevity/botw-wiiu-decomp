extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0265dd8c(void*, const void*);

extern "C" void* fn_02acfd5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0265dd8c(object, descriptor);
    }
    return object;
}
