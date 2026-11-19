extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0236a194(void*, const void*);

extern "C" void* fn_02ac1e90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0236a194(object, descriptor);
    }
    return object;
}
