extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213574c(void*, const void*);

extern "C" void* fn_02ab0654(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0213574c(object, descriptor);
    }
    return object;
}
