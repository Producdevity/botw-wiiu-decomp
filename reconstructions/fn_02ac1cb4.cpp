extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0208fcec(void*, const void*);

extern "C" void* fn_02ac1cb4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0208fcec(object, descriptor);
    }
    return object;
}
