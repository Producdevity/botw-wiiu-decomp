extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026648cc(void*, const void*);

extern "C" void* fn_02acfef4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_026648cc(object, descriptor);
    }
    return object;
}
