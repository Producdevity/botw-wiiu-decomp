extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025bc234(void*, const void*);

extern "C" void* fn_02acd760(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_025bc234(object, descriptor);
    }
    return object;
}
