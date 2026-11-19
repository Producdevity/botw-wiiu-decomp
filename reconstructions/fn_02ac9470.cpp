extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02851ab8(void*, const void*);

extern "C" void* fn_02ac9470(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02851ab8(object, descriptor);
    }
    return object;
}
