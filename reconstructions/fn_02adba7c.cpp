extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0299b7e4(void*, const void*);

extern "C" void* fn_02adba7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_0299b7e4(object, descriptor);
    }
    return object;
}
