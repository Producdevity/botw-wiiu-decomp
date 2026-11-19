extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0272fde8(void*, const void*);

extern "C" void* fn_02ad27dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(728, allocator, 4);
    if (object) {
        object = fn_0272fde8(object, descriptor);
    }
    return object;
}
