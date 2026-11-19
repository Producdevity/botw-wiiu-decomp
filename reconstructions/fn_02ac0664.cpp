extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cb9050(void*, const void*);

extern "C" void* fn_02ac0664(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_02cb9050(object, descriptor);
    }
    return object;
}
