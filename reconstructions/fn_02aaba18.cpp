extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032cc008(void*, const void*);

extern "C" void* fn_02aaba18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_032cc008(object, descriptor);
    }
    return object;
}
