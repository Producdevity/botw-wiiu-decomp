extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020748b0(void*, const void*);

extern "C" void* fn_02ab18a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1712, allocator, 4);
    if (object) {
        object = fn_020748b0(object, descriptor);
    }
    return object;
}
