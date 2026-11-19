extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02308500(void*, const void*);

extern "C" void* fn_02abdbe4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_02308500(object, descriptor);
    }
    return object;
}
