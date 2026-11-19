extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cf6b84(void*, const void*);

extern "C" void* fn_02ac16dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02cf6b84(object, descriptor);
    }
    return object;
}
