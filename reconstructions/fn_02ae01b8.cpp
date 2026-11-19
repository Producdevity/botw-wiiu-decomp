extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029e1c7c(void*, const void*);

extern "C" void* fn_02ae01b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029e1c7c(object, descriptor);
    }
    return object;
}
