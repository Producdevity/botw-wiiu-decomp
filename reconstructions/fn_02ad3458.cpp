extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02763fc0(void*, const void*);

extern "C" void* fn_02ad3458(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(344, allocator, 4);
    if (object) {
        object = fn_02763fc0(object, descriptor);
    }
    return object;
}
