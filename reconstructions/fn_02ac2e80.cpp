extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02395b08(void*, const void*);

extern "C" void* fn_02ac2e80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_02395b08(object, descriptor);
    }
    return object;
}
