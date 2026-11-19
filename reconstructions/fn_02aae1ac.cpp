extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020eb4ac(void*, const void*);

extern "C" void* fn_02aae1ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_020eb4ac(object, descriptor);
    }
    return object;
}
