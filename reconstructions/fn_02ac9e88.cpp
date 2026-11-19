extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024ed918(void*, const void*);

extern "C" void* fn_02ac9e88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_024ed918(object, descriptor);
    }
    return object;
}
