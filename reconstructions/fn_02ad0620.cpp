extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02686888(void*, const void*);

extern "C" void* fn_02ad0620(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(440, allocator, 4);
    if (object) {
        object = fn_02686888(object, descriptor);
    }
    return object;
}
