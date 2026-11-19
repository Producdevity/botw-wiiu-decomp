extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02113bfc(void*, const void*);

extern "C" void* fn_02aaeef4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_02113bfc(object, descriptor);
    }
    return object;
}
