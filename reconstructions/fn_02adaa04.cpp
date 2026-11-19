extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029465a8(void*, const void*);

extern "C" void* fn_02adaa04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1532, allocator, 4);
    if (object) {
        object = fn_029465a8(object, descriptor);
    }
    return object;
}
