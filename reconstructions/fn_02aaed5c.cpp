extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02110818(void*, const void*);

extern "C" void* fn_02aaed5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02110818(object, descriptor);
    }
    return object;
}
