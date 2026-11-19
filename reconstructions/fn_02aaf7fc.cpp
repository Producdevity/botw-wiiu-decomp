extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02b9e064(void*, const void*);

extern "C" void* fn_02aaf7fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(212, allocator, 4);
    if (object) {
        object = fn_02b9e064(object, descriptor);
    }
    return object;
}
