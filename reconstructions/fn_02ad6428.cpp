extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02841b48(void*, const void*);

extern "C" void* fn_02ad6428(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02841b48(object, descriptor);
    }
    return object;
}
