extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c7ff4(void*, const void*);

extern "C" void* fn_02aad5fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_020c7ff4(object, descriptor);
    }
    return object;
}
