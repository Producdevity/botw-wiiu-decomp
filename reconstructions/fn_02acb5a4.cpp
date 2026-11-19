extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0253eedc(void*, const void*);

extern "C" void* fn_02acb5a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(256, allocator, 4);
    if (object) {
        object = fn_0253eedc(object, descriptor);
    }
    return object;
}
