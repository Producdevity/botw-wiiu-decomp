extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024cde3c(void*, const void*);

extern "C" void* fn_02ac9580(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_024cde3c(object, descriptor);
    }
    return object;
}
