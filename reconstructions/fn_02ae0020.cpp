extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029df67c(void*, const void*);

extern "C" void* fn_02ae0020(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_029df67c(object, descriptor);
    }
    return object;
}
