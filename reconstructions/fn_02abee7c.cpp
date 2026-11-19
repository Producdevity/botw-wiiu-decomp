extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c655c4(void*, const void*);

extern "C" void* fn_02abee7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c655c4(object, descriptor);
    }
    return object;
}
