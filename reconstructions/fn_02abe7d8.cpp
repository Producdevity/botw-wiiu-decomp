extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0234ed44(void*, const void*);

extern "C" void* fn_02abe7d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0234ed44(object, descriptor);
    }
    return object;
}
