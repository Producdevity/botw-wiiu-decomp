extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02171fb8(void*, const void*);

extern "C" void* fn_02ab2458(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02171fb8(object, descriptor);
    }
    return object;
}
