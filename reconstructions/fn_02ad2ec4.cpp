extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02751848(void*, const void*);

extern "C" void* fn_02ad2ec4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(756, allocator, 4);
    if (object) {
        object = fn_02751848(object, descriptor);
    }
    return object;
}
