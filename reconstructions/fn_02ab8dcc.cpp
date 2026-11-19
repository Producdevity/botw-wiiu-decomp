extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022590f4(void*, const void*);

extern "C" void* fn_02ab8dcc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_022590f4(object, descriptor);
    }
    return object;
}
