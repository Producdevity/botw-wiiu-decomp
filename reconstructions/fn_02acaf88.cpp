extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bfd128(void*, const void*);

extern "C" void* fn_02acaf88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_02bfd128(object, descriptor);
    }
    return object;
}
