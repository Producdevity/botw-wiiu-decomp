extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cf3a68(void*, const void*);

extern "C" void* fn_02ac15cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cf3a68(object, descriptor);
    }
    return object;
}
