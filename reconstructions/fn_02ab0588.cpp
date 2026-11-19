extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213410c(void*, const void*);

extern "C" void* fn_02ab0588(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0213410c(object, descriptor);
    }
    return object;
}
