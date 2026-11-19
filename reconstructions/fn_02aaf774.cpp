extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02b93738(void*, const void*);

extern "C" void* fn_02aaf774(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(532, allocator, 4);
    if (object) {
        object = fn_02b93738(object, descriptor);
    }
    return object;
}
