extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246812c(void*, const void*);

extern "C" void* fn_02ac76c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(280, allocator, 4);
    if (object) {
        object = fn_0246812c(object, descriptor);
    }
    return object;
}
