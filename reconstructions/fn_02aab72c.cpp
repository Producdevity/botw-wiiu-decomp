extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b9698(void*, const void*);

extern "C" void* fn_02aab72c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_032b9698(object, descriptor);
    }
    return object;
}
