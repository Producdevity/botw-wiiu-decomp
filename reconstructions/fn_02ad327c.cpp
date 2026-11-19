extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0275f880(void*, const void*);

extern "C" void* fn_02ad327c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_0275f880(object, descriptor);
    }
    return object;
}
