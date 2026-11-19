extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02876f60(void*, const void*);

extern "C" void* fn_02ad7170(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(272, allocator, 4);
    if (object) {
        object = fn_02876f60(object, descriptor);
    }
    return object;
}
