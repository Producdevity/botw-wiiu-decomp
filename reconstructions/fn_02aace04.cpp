extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020b7594(void*, const void*);

extern "C" void* fn_02aace04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(668, allocator, 4);
    if (object) {
        object = fn_020b7594(object, descriptor);
    }
    return object;
}
