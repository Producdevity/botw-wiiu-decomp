extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0233f7ac(void*, const void*);

extern "C" void* fn_02abdfe0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0233f7ac(object, descriptor);
    }
    return object;
}
