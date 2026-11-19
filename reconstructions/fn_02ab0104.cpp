extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bd8678(void*, const void*);

extern "C" void* fn_02ab0104(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(832, allocator, 4);
    if (object) {
        object = fn_02bd8678(object, descriptor);
    }
    return object;
}
