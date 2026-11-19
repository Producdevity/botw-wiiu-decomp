extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021ab9dc(void*, const void*);

extern "C" void* fn_02ab3aec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_021ab9dc(object, descriptor);
    }
    return object;
}
