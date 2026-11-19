extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0226abcc(void*, const void*);

extern "C" void* fn_02ab9608(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_0226abcc(object, descriptor);
    }
    return object;
}
