extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025fb41c(void*, const void*);

extern "C" void* fn_02ace134(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_025fb41c(object, descriptor);
    }
    return object;
}
