extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0242ad74(void*, const void*);

extern "C" void* fn_02ac62d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0242ad74(object, descriptor);
    }
    return object;
}
