extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026497f8(void*, const void*);

extern "C" void* fn_02acf5ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_026497f8(object, descriptor);
    }
    return object;
}
