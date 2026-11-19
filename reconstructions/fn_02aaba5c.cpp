extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032cd648(void*, const void*);

extern "C" void* fn_02aaba5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2676, allocator, 4);
    if (object) {
        object = fn_032cd648(object, descriptor);
    }
    return object;
}
