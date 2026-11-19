extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02308bac(void*, const void*);

extern "C" void* fn_02abdc28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_02308bac(object, descriptor);
    }
    return object;
}
