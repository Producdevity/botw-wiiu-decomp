extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0235af50(void*, const void*);

extern "C" void* fn_02abeb4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0235af50(object, descriptor);
    }
    return object;
}
