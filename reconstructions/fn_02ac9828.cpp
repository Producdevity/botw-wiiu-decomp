extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d7244(void*, const void*);

extern "C" void* fn_02ac9828(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_024d7244(object, descriptor);
    }
    return object;
}
