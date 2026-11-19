extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02734640(void*, const void*);

extern "C" void* fn_02ad28a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(516, allocator, 4);
    if (object) {
        object = fn_02734640(object, descriptor);
    }
    return object;
}
