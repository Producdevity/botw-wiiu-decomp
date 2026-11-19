extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0236101c(void*, const void*);

extern "C" void* fn_02ac19c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0236101c(object, descriptor);
    }
    return object;
}
