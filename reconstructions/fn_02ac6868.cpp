extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246c5f4(void*, const void*);

extern "C" void* fn_02ac6868(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_0246c5f4(object, descriptor);
    }
    return object;
}
