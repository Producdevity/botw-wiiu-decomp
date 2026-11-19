extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0214ce98(void*, const void*);

extern "C" void* fn_02ab1028(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_0214ce98(object, descriptor);
    }
    return object;
}
