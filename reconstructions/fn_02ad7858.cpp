extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0288f9fc(void*, const void*);

extern "C" void* fn_02ad7858(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_0288f9fc(object, descriptor);
    }
    return object;
}
