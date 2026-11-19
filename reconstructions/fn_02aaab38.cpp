extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0311b130(void*, const void*);

extern "C" void* fn_02aaab38(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0311b130(object, descriptor);
    }
    return object;
}
