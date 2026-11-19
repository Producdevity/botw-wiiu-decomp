extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213f388(void*, const void*);

extern "C" void* fn_02ab0a0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_0213f388(object, descriptor);
    }
    return object;
}
