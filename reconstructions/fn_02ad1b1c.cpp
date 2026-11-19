extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026df578(void*, const void*);

extern "C" void* fn_02ad1b1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_026df578(object, descriptor);
    }
    return object;
}
