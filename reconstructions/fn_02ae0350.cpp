extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029e3844(void*, const void*);

extern "C" void* fn_02ae0350(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029e3844(object, descriptor);
    }
    return object;
}
