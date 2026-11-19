extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029af94c(void*, const void*);

extern "C" void* fn_02add00c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029af94c(object, descriptor);
    }
    return object;
}
