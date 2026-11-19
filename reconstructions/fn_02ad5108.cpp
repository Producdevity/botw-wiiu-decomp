extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d30a4c(void*, const void*);

extern "C" void* fn_02ad5108(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_02d30a4c(object, descriptor);
    }
    return object;
}
