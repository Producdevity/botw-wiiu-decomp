extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02306130(void*, const void*);

extern "C" void* fn_02abdad4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02306130(object, descriptor);
    }
    return object;
}
