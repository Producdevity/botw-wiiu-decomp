extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022d28cc(void*, const void*);

extern "C" void* fn_02abb890(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_022d28cc(object, descriptor);
    }
    return object;
}
