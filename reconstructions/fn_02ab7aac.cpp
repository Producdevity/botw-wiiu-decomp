extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02223ddc(void*, const void*);

extern "C" void* fn_02ab7aac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02223ddc(object, descriptor);
    }
    return object;
}
