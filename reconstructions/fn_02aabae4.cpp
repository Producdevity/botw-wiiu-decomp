extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032cfa6c(void*, const void*);

extern "C" void* fn_02aabae4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(4660, allocator, 4);
    if (object) {
        object = fn_032cfa6c(object, descriptor);
    }
    return object;
}
