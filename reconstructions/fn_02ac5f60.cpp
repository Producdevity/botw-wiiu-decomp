extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02420b70(void*, const void*);

extern "C" void* fn_02ac5f60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02420b70(object, descriptor);
    }
    return object;
}
