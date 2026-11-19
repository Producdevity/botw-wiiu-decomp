extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02412ee0(void*, const void*);

extern "C" void* fn_02ac5adc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_02412ee0(object, descriptor);
    }
    return object;
}
