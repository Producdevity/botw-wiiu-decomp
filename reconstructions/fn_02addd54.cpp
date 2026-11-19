extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029ba35c(void*, const void*);

extern "C" void* fn_02addd54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_029ba35c(object, descriptor);
    }
    return object;
}
