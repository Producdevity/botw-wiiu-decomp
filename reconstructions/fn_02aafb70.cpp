extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bb3eac(void*, const void*);

extern "C" void* fn_02aafb70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(672, allocator, 4);
    if (object) {
        object = fn_02bb3eac(object, descriptor);
    }
    return object;
}
