extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0245fb28(void*, const void*);

extern "C" void* fn_02ac734c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_0245fb28(object, descriptor);
    }
    return object;
}
