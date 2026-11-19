extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02278530(void*, const void*);

extern "C" void* fn_02ab9e00(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02278530(object, descriptor);
    }
    return object;
}
