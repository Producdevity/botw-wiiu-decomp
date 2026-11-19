extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02366a94(void*, const void*);

extern "C" void* fn_02ac1dc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_02366a94(object, descriptor);
    }
    return object;
}
