extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e4064(void*, const void*);

extern "C" void* fn_02ad48cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_027e4064(object, descriptor);
    }
    return object;
}
