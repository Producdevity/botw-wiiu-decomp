extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02915978(void*, const void*);

extern "C" void* fn_02ad97f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02915978(object, descriptor);
    }
    return object;
}
