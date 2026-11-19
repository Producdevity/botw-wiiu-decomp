extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023406d0(void*, const void*);

extern "C" void* fn_02abe0ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_023406d0(object, descriptor);
    }
    return object;
}
