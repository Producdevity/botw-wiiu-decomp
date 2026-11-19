extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225eecc(void*, const void*);

extern "C" void* fn_02ab90b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_0225eecc(object, descriptor);
    }
    return object;
}
