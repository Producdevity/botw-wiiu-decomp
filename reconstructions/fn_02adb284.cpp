extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029729cc(void*, const void*);

extern "C" void* fn_02adb284(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_029729cc(object, descriptor);
    }
    return object;
}
