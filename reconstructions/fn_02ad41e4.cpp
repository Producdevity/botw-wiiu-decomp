extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0277ff18(void*, const void*);

extern "C" void* fn_02ad41e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(640, allocator, 4);
    if (object) {
        object = fn_0277ff18(object, descriptor);
    }
    return object;
}
