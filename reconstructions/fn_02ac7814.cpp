extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246af1c(void*, const void*);

extern "C" void* fn_02ac7814(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(200, allocator, 4);
    if (object) {
        object = fn_0246af1c(object, descriptor);
    }
    return object;
}
