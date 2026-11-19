extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02baf768(void*, const void*);

extern "C" void* fn_02aafb2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(540, allocator, 4);
    if (object) {
        object = fn_02baf768(object, descriptor);
    }
    return object;
}
