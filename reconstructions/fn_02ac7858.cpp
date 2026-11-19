extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246c118(void*, const void*);

extern "C" void* fn_02ac7858(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0246c118(object, descriptor);
    }
    return object;
}
