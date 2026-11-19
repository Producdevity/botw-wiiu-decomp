extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0242a960(void*, const void*);

extern "C" void* fn_02ac6290(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0242a960(object, descriptor);
    }
    return object;
}
