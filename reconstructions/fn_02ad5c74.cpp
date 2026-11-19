extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0281e21c(void*, const void*);

extern "C" void* fn_02ad5c74(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(604, allocator, 4);
    if (object) {
        object = fn_0281e21c(object, descriptor);
    }
    return object;
}
