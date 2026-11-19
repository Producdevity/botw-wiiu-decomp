extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0282aecc(void*, const void*);

extern "C" void* fn_02ad5e94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1376, allocator, 4);
    if (object) {
        object = fn_0282aecc(object, descriptor);
    }
    return object;
}
