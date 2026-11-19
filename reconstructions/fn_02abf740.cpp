extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c871cc(void*, const void*);

extern "C" void* fn_02abf740(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c871cc(object, descriptor);
    }
    return object;
}
