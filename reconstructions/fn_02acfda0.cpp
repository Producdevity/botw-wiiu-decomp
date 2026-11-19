extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0296da68(void*, const void*);

extern "C" void* fn_02acfda0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(236, allocator, 4);
    if (object) {
        object = fn_0296da68(object, descriptor);
    }
    return object;
}
