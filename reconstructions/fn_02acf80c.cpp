extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02650ccc(void*, const void*);

extern "C" void* fn_02acf80c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02650ccc(object, descriptor);
    }
    return object;
}
