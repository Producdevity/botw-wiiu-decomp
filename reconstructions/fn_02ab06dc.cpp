extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02136314(void*, const void*);

extern "C" void* fn_02ab06dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02136314(object, descriptor);
    }
    return object;
}
