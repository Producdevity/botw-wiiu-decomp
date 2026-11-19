extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020e26fc(void*, const void*);

extern "C" void* fn_02aae014(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(244, allocator, 4);
    if (object) {
        object = fn_020e26fc(object, descriptor);
    }
    return object;
}
