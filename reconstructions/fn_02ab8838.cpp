extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0224e7ec(void*, const void*);

extern "C" void* fn_02ab8838(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0224e7ec(object, descriptor);
    }
    return object;
}
