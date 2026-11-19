extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02baa198(void*, const void*);

extern "C" void* fn_02aafa1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02baa198(object, descriptor);
    }
    return object;
}
