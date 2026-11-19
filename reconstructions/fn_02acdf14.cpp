extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f50bc(void*, const void*);

extern "C" void* fn_02acdf14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_025f50bc(object, descriptor);
    }
    return object;
}
