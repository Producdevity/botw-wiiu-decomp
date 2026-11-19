extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0263572c(void*, const void*);

extern "C" void* fn_02acf0e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(492, allocator, 4);
    if (object) {
        object = fn_0263572c(object, descriptor);
    }
    return object;
}
