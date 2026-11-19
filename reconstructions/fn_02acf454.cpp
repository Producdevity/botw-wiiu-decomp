extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02643ba4(void*, const void*);

extern "C" void* fn_02acf454(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02643ba4(object, descriptor);
    }
    return object;
}
