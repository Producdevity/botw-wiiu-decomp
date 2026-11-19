extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0222215c(void*, const void*);

extern "C" void* fn_02ab799c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_0222215c(object, descriptor);
    }
    return object;
}
