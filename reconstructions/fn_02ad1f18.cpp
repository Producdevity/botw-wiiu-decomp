extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026ed69c(void*, const void*);

extern "C" void* fn_02ad1f18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_026ed69c(object, descriptor);
    }
    return object;
}
