extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0231af50(void*, const void*);

extern "C" void* fn_02abd100(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0231af50(object, descriptor);
    }
    return object;
}
