extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c7a90(void*, const void*);

extern "C" void* fn_02ade728(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_029c7a90(object, descriptor);
    }
    return object;
}
