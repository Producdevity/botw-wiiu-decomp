extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021fc9f4(void*, const void*);

extern "C" void* fn_02ab645c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021fc9f4(object, descriptor);
    }
    return object;
}
