extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0237be90(void*, const void*);

extern "C" void* fn_02ac23e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0237be90(object, descriptor);
    }
    return object;
}
