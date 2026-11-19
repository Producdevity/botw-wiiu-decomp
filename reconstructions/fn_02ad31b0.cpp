extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0275d268(void*, const void*);

extern "C" void* fn_02ad31b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0275d268(object, descriptor);
    }
    return object;
}
