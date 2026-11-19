extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0283ba24(void*, const void*);

extern "C" void* fn_02ad6290(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(424, allocator, 4);
    if (object) {
        object = fn_0283ba24(object, descriptor);
    }
    return object;
}
