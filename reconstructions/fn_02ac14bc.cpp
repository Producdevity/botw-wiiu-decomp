extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cee244(void*, const void*);

extern "C" void* fn_02ac14bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_02cee244(object, descriptor);
    }
    return object;
}
