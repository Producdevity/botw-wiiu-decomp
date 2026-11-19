extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ba007c(void*, const void*);

extern "C" void* fn_02aaf884(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(288, allocator, 4);
    if (object) {
        object = fn_02ba007c(object, descriptor);
    }
    return object;
}
