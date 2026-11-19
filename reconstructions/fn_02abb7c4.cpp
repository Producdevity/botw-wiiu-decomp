extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022cfd8c(void*, const void*);

extern "C" void* fn_02abb7c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_022cfd8c(object, descriptor);
    }
    return object;
}
