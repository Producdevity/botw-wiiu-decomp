extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0283ed9c(void*, const void*);

extern "C" void* fn_02ad635c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0283ed9c(object, descriptor);
    }
    return object;
}
