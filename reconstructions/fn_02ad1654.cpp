extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026d4cdc(void*, const void*);

extern "C" void* fn_02ad1654(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_026d4cdc(object, descriptor);
    }
    return object;
}
