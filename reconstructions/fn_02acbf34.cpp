extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0255ce10(void*, const void*);

extern "C" void* fn_02acbf34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(188, allocator, 4);
    if (object) {
        object = fn_0255ce10(object, descriptor);
    }
    return object;
}
