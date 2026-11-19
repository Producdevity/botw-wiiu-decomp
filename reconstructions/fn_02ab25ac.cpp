extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02173f68(void*, const void*);

extern "C" void* fn_02ab25ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_02173f68(object, descriptor);
    }
    return object;
}
