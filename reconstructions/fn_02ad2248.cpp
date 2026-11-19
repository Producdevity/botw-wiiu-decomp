extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02715d20(void*, const void*);

extern "C" void* fn_02ad2248(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02715d20(object, descriptor);
    }
    return object;
}
