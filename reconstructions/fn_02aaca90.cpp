extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0350cf04(void*, const void*);

extern "C" void* fn_02aaca90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_0350cf04(object, descriptor);
    }
    return object;
}
