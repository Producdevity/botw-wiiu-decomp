extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0269e908(void*, const void*);

extern "C" void* fn_02ad0a1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0269e908(object, descriptor);
    }
    return object;
}
