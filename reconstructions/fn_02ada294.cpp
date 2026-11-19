extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0292c744(void*, const void*);

extern "C" void* fn_02ada294(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0292c744(object, descriptor);
    }
    return object;
}
