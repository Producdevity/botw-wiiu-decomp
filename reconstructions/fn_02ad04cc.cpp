extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0267ccf0(void*, const void*);

extern "C" void* fn_02ad04cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_0267ccf0(object, descriptor);
    }
    return object;
}
