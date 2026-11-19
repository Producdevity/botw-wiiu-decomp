extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02461bcc(void*, const void*);

extern "C" void* fn_02ac745c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02461bcc(object, descriptor);
    }
    return object;
}
