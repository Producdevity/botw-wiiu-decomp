extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02586364(void*, const void*);

extern "C" void* fn_02acca5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(208, allocator, 4);
    if (object) {
        object = fn_02586364(object, descriptor);
    }
    return object;
}
