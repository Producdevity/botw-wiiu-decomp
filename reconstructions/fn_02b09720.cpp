extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a6f8fc(void*, const void*);

extern "C" void* fn_02b09720(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02a6f8fc(object, descriptor);
    }
    return object;
}
