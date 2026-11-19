extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0237ecdc(void*, const void*);

extern "C" void* fn_02ac2468(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0237ecdc(object, descriptor);
    }
    return object;
}
