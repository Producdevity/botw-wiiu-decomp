extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bbb0d4(void*, const void*);

extern "C" void* fn_02aafbb4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(672, allocator, 4);
    if (object) {
        object = fn_02bbb0d4(object, descriptor);
    }
    return object;
}
