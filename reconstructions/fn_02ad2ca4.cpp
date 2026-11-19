extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02747204(void*, const void*);

extern "C" void* fn_02ad2ca4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(768, allocator, 4);
    if (object) {
        object = fn_02747204(object, descriptor);
    }
    return object;
}
