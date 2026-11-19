extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0283810c(void*, const void*);

extern "C" void* fn_02ad6180(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1116, allocator, 4);
    if (object) {
        object = fn_0283810c(object, descriptor);
    }
    return object;
}
