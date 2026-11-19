extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028da218(void*, const void*);

extern "C" void* fn_02ad5b64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_028da218(object, descriptor);
    }
    return object;
}
