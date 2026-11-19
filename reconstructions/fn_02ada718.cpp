extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0293ab64(void*, const void*);

extern "C" void* fn_02ada718(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(244, allocator, 4);
    if (object) {
        object = fn_0293ab64(object, descriptor);
    }
    return object;
}
