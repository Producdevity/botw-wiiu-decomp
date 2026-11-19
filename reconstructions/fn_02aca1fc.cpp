extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024fa110(void*, const void*);

extern "C" void* fn_02aca1fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_024fa110(object, descriptor);
    }
    return object;
}
