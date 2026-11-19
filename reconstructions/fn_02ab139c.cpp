extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02153ca8(void*, const void*);

extern "C" void* fn_02ab139c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_02153ca8(object, descriptor);
    }
    return object;
}
