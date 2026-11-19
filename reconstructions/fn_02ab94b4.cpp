extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022698e0(void*, const void*);

extern "C" void* fn_02ab94b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_022698e0(object, descriptor);
    }
    return object;
}
