extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029dd8c4(void*, const void*);

extern "C" void* fn_02adfe88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029dd8c4(object, descriptor);
    }
    return object;
}
