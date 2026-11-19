extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a5dbfc(void*, const void*);

extern "C" void* fn_02b08e18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a5dbfc(object, descriptor);
    }
    return object;
}
