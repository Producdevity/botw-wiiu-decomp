extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0253130c(void*, const void*);

extern "C" void* fn_02acae78(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0253130c(object, descriptor);
    }
    return object;
}
