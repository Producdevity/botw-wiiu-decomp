extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02182598(void*, const void*);

extern "C" void* fn_02ab2afc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02182598(object, descriptor);
    }
    return object;
}
