extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0275a270(void*, const void*);

extern "C" void* fn_02ad30a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0275a270(object, descriptor);
    }
    return object;
}
