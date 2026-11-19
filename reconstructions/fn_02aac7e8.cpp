extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_035055d8(void*, const void*);

extern "C" void* fn_02aac7e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_035055d8(object, descriptor);
    }
    return object;
}
