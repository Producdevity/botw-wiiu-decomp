extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022bc464(void*, const void*);

extern "C" void* fn_02abb164(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_022bc464(object, descriptor);
    }
    return object;
}
