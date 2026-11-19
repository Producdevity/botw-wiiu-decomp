extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02508158(void*, const void*);

extern "C" void* fn_02aca5f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02508158(object, descriptor);
    }
    return object;
}
