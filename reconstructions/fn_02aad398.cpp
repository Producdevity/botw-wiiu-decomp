extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022806ac(void*, const void*);

extern "C" void* fn_02aad398(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_022806ac(object, descriptor);
    }
    return object;
}
