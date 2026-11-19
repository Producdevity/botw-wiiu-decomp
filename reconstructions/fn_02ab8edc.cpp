extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225cd90(void*, const void*);

extern "C" void* fn_02ab8edc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_0225cd90(object, descriptor);
    }
    return object;
}
