extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02aa1acc(void*, const void*);

extern "C" void* fn_02b0ab94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02aa1acc(object, descriptor);
    }
    return object;
}
