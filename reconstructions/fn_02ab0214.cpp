extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02be5c28(void*, const void*);

extern "C" void* fn_02ab0214(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(452, allocator, 4);
    if (object) {
        object = fn_02be5c28(object, descriptor);
    }
    return object;
}
