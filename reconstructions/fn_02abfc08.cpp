extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c94b4c(void*, const void*);

extern "C" void* fn_02abfc08(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02c94b4c(object, descriptor);
    }
    return object;
}
