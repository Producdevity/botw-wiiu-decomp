extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0207dbec(void*, const void*);

extern "C" void* fn_02ab7bbc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0207dbec(object, descriptor);
    }
    return object;
}
