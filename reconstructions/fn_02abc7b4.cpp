extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02301458(void*, const void*);

extern "C" void* fn_02abc7b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02301458(object, descriptor);
    }
    return object;
}
