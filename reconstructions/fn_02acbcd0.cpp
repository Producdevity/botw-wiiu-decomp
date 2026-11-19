extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025554e4(void*, const void*);

extern "C" void* fn_02acbcd0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(980, allocator, 4);
    if (object) {
        object = fn_025554e4(object, descriptor);
    }
    return object;
}
