extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0326ae84(void*, const void*);

extern "C" void* fn_02aac078(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0326ae84(object, descriptor);
    }
    return object;
}
