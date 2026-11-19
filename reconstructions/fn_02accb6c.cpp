extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02589258(void*, const void*);

extern "C" void* fn_02accb6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02589258(object, descriptor);
    }
    return object;
}
