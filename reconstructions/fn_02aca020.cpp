extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024f2f68(void*, const void*);

extern "C" void* fn_02aca020(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(664, allocator, 4);
    if (object) {
        object = fn_024f2f68(object, descriptor);
    }
    return object;
}
