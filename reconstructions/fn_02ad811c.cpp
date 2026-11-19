extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028cab78(void*, const void*);

extern "C" void* fn_02ad811c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(532, allocator, 4);
    if (object) {
        object = fn_028cab78(object, descriptor);
    }
    return object;
}
