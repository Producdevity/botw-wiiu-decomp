extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026d0c80(void*, const void*);

extern "C" void* fn_02ad15cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_026d0c80(object, descriptor);
    }
    return object;
}
