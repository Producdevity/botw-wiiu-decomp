extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02682d48(void*, const void*);

extern "C" void* fn_02ad0598(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(432, allocator, 4);
    if (object) {
        object = fn_02682d48(object, descriptor);
    }
    return object;
}
