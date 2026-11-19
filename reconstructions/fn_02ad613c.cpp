extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02837660(void*, const void*);

extern "C" void* fn_02ad613c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02837660(object, descriptor);
    }
    return object;
}
