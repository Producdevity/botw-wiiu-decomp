extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213713c(void*, const void*);

extern "C" void* fn_02ab07a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0213713c(object, descriptor);
    }
    return object;
}
