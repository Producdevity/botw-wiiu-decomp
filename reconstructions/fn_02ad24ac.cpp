extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02721ee8(void*, const void*);

extern "C" void* fn_02ad24ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(400, allocator, 4);
    if (object) {
        object = fn_02721ee8(object, descriptor);
    }
    return object;
}
