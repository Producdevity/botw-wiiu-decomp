extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02560a68(void*, const void*);

extern "C" void* fn_02acc0cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02560a68(object, descriptor);
    }
    return object;
}
