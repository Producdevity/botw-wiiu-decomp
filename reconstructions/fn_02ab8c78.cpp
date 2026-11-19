extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02256f18(void*, const void*);

extern "C" void* fn_02ab8c78(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(268, allocator, 4);
    if (object) {
        object = fn_02256f18(object, descriptor);
    }
    return object;
}
