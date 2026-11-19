extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026512cc(void*, const void*);

extern "C" void* fn_02acf7c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_026512cc(object, descriptor);
    }
    return object;
}
