extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02baaef8(void*, const void*);

extern "C" void* fn_02aafaa4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_02baaef8(object, descriptor);
    }
    return object;
}
