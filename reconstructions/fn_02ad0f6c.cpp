extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026b31cc(void*, const void*);

extern "C" void* fn_02ad0f6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_026b31cc(object, descriptor);
    }
    return object;
}
