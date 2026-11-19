extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023eb940(void*, const void*);

extern "C" void* fn_02ac4d94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_023eb940(object, descriptor);
    }
    return object;
}
