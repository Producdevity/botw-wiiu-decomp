extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025f5870(void*, const void*);

extern "C" void* fn_02acdf58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_025f5870(object, descriptor);
    }
    return object;
}
