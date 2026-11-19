extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021fbd10(void*, const void*);

extern "C" void* fn_02ab634c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_021fbd10(object, descriptor);
    }
    return object;
}
