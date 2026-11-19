extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029cc328(void*, const void*);

extern "C" void* fn_02adeae0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_029cc328(object, descriptor);
    }
    return object;
}
