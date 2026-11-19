extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0226d738(void*, const void*);

extern "C" void* fn_02ab9828(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_0226d738(object, descriptor);
    }
    return object;
}
