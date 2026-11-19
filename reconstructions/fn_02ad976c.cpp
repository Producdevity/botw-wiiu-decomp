extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02914d08(void*, const void*);

extern "C" void* fn_02ad976c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02914d08(object, descriptor);
    }
    return object;
}
