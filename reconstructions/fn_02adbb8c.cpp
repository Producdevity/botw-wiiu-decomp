extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029a0898(void*, const void*);

extern "C" void* fn_02adbb8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_029a0898(object, descriptor);
    }
    return object;
}
