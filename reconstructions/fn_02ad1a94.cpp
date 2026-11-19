extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026de264(void*, const void*);

extern "C" void* fn_02ad1a94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_026de264(object, descriptor);
    }
    return object;
}
