extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02177fd4(void*, const void*);

extern "C" void* fn_02ab26bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_02177fd4(object, descriptor);
    }
    return object;
}
