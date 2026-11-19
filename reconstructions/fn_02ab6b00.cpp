extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0220c1c4(void*, const void*);

extern "C" void* fn_02ab6b00(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0220c1c4(object, descriptor);
    }
    return object;
}
