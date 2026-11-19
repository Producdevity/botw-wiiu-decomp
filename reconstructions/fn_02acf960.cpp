extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02656820(void*, const void*);

extern "C" void* fn_02acf960(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_02656820(object, descriptor);
    }
    return object;
}
