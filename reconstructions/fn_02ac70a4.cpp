extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0245700c(void*, const void*);

extern "C" void* fn_02ac70a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0245700c(object, descriptor);
    }
    return object;
}
