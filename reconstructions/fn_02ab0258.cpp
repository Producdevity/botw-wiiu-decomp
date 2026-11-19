extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02beb080(void*, const void*);

extern "C" void* fn_02ab0258(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(364, allocator, 4);
    if (object) {
        object = fn_02beb080(object, descriptor);
    }
    return object;
}
