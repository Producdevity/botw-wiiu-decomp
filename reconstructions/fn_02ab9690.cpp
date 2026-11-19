extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0226ba04(void*, const void*);

extern "C" void* fn_02ab9690(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0226ba04(object, descriptor);
    }
    return object;
}
