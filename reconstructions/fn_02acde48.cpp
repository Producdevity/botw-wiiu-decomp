extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f1f30(void*, const void*);

extern "C" void* fn_02acde48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_025f1f30(object, descriptor);
    }
    return object;
}
