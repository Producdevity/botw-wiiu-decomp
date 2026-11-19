extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f033c(void*, const void*);

extern "C" void* fn_02acde04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(340, allocator, 4);
    if (object) {
        object = fn_025f033c(object, descriptor);
    }
    return object;
}
