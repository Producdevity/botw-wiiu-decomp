extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02360a40(void*, const void*);

extern "C" void* fn_02ac1984(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02360a40(object, descriptor);
    }
    return object;
}
