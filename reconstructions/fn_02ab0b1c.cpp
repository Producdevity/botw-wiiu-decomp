extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0214281c(void*, const void*);

extern "C" void* fn_02ab0b1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_0214281c(object, descriptor);
    }
    return object;
}
