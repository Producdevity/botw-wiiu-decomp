extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02448774(void*, const void*);

extern "C" void* fn_02ac6978(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02448774(object, descriptor);
    }
    return object;
}
