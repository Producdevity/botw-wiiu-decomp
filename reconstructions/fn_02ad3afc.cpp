extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02790794(void*, const void*);

extern "C" void* fn_02ad3afc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(316, allocator, 4);
    if (object) {
        object = fn_02790794(object, descriptor);
    }
    return object;
}
