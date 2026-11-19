extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0277d584(void*, const void*);

extern "C" void* fn_02ad41a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0277d584(object, descriptor);
    }
    return object;
}
