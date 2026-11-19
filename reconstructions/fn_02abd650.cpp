extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023306d0(void*, const void*);

extern "C" void* fn_02abd650(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_023306d0(object, descriptor);
    }
    return object;
}
