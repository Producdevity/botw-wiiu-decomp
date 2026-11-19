extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0292f17c(void*, const void*);

extern "C" void* fn_02ada3a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0292f17c(object, descriptor);
    }
    return object;
}
