extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bd5ac0(void*, const void*);

extern "C" void* fn_02ab007c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(324, allocator, 4);
    if (object) {
        object = fn_02bd5ac0(object, descriptor);
    }
    return object;
}
