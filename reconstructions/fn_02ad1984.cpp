extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026da2d4(void*, const void*);

extern "C" void* fn_02ad1984(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_026da2d4(object, descriptor);
    }
    return object;
}
