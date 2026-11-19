extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0299fcbc(void*, const void*);

extern "C" void* fn_02adbb48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0299fcbc(object, descriptor);
    }
    return object;
}
