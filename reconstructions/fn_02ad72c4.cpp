extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0287baac(void*, const void*);

extern "C" void* fn_02ad72c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0287baac(object, descriptor);
    }
    return object;
}
