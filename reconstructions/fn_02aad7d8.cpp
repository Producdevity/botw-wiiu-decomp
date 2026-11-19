extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020cdeb4(void*, const void*);

extern "C" void* fn_02aad7d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_020cdeb4(object, descriptor);
    }
    return object;
}
