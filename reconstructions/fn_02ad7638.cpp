extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02888040(void*, const void*);

extern "C" void* fn_02ad7638(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02888040(object, descriptor);
    }
    return object;
}
