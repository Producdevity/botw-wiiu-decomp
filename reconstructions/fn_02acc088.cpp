extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025614fc(void*, const void*);

extern "C" void* fn_02acc088(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_025614fc(object, descriptor);
    }
    return object;
}
