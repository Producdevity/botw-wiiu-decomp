extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025bdd60(void*, const void*);

extern "C" void* fn_02acd7a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_025bdd60(object, descriptor);
    }
    return object;
}
