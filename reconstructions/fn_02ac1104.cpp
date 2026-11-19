extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ce1bb0(void*, const void*);

extern "C" void* fn_02ac1104(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02ce1bb0(object, descriptor);
    }
    return object;
}
