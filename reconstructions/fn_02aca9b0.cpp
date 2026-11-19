extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02510000(void*, const void*);

extern "C" void* fn_02aca9b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(312, allocator, 4);
    if (object) {
        object = fn_02510000(object, descriptor);
    }
    return object;
}
