extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021cadec(void*, const void*);

extern "C" void* fn_02ab4834(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_021cadec(object, descriptor);
    }
    return object;
}
