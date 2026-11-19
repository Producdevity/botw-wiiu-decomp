extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02896b84(void*, const void*);

extern "C" void* fn_02ad7c10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02896b84(object, descriptor);
    }
    return object;
}
