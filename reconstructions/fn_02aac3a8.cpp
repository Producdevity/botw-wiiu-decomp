extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_034fd970(void*, const void*);

extern "C" void* fn_02aac3a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_034fd970(object, descriptor);
    }
    return object;
}
