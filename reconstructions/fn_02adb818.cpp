extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0298a9f0(void*, const void*);

extern "C" void* fn_02adb818(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0298a9f0(object, descriptor);
    }
    return object;
}
