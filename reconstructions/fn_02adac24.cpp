extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02960918(void*, const void*);

extern "C" void* fn_02adac24(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_02960918(object, descriptor);
    }
    return object;
}
