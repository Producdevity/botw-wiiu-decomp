extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02376240(void*, const void*);

extern "C" void* fn_02ac2204(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_02376240(object, descriptor);
    }
    return object;
}
