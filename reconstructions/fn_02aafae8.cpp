extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02baea94(void*, const void*);

extern "C" void* fn_02aafae8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_02baea94(object, descriptor);
    }
    return object;
}
