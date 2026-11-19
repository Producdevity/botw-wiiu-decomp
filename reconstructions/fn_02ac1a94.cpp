extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02088c20(void*, const void*);

extern "C" void* fn_02ac1a94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(248, allocator, 4);
    if (object) {
        object = fn_02088c20(object, descriptor);
    }
    return object;
}
