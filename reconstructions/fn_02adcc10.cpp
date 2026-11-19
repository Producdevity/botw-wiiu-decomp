extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032dfe50(void*, const void*);

extern "C" void* fn_02adcc10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(236, allocator, 4);
    if (object) {
        object = fn_032dfe50(object, descriptor);
    }
    return object;
}
