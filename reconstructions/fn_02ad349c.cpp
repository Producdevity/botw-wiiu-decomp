extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02764c78(void*, const void*);

extern "C" void* fn_02ad349c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(200, allocator, 4);
    if (object) {
        object = fn_02764c78(object, descriptor);
    }
    return object;
}
