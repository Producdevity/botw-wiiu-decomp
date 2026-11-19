extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02405508(void*, const void*);

extern "C" void* fn_02ac569c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(228, allocator, 4);
    if (object) {
        object = fn_02405508(object, descriptor);
    }
    return object;
}
