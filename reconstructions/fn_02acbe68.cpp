extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0255b1cc(void*, const void*);

extern "C" void* fn_02acbe68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0255b1cc(object, descriptor);
    }
    return object;
}
