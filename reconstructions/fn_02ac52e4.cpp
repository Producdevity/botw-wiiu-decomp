extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023fb164(void*, const void*);

extern "C" void* fn_02ac52e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(248, allocator, 4);
    if (object) {
        object = fn_023fb164(object, descriptor);
    }
    return object;
}
