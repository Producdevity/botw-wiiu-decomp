extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a4b850(void*, const void*);

extern "C" void* fn_02b08730(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02a4b850(object, descriptor);
    }
    return object;
}
