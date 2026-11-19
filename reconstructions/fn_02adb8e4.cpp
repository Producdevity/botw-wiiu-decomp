extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02990cdc(void*, const void*);

extern "C" void* fn_02adb8e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_02990cdc(object, descriptor);
    }
    return object;
}
