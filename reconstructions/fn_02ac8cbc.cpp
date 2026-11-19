extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032765cc(void*, const void*);

extern "C" void* fn_02ac8cbc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_032765cc(object, descriptor);
    }
    return object;
}
