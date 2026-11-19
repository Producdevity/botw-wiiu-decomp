extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02173aec(void*, const void*);

extern "C" void* fn_02ab2568(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_02173aec(object, descriptor);
    }
    return object;
}
