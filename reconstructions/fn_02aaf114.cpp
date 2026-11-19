extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021188ac(void*, const void*);

extern "C" void* fn_02aaf114(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_021188ac(object, descriptor);
    }
    return object;
}
