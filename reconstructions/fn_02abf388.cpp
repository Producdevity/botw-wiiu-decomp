extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c76fd0(void*, const void*);

extern "C" void* fn_02abf388(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02c76fd0(object, descriptor);
    }
    return object;
}
