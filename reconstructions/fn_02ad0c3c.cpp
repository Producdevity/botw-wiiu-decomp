extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026a5b08(void*, const void*);

extern "C" void* fn_02ad0c3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_026a5b08(object, descriptor);
    }
    return object;
}
