extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0253d228(void*, const void*);

extern "C" void* fn_02acb494(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0253d228(object, descriptor);
    }
    return object;
}
