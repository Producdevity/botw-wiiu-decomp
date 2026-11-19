extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0206d464(void*, const void*);

extern "C" void* fn_02ab05cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2192, allocator, 4);
    if (object) {
        object = fn_0206d464(object, descriptor);
    }
    return object;
}
