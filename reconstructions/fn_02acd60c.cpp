extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025b76b0(void*, const void*);

extern "C" void* fn_02acd60c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_025b76b0(object, descriptor);
    }
    return object;
}
