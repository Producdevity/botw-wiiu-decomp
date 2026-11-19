extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02408ce8(void*, const void*);

extern "C" void* fn_02ac57ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_02408ce8(object, descriptor);
    }
    return object;
}
