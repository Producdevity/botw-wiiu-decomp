extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0210c1c4(void*, const void*);

extern "C" void* fn_02aaeaf8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_0210c1c4(object, descriptor);
    }
    return object;
}
