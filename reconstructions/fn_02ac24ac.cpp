extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0237f414(void*, const void*);

extern "C" void* fn_02ac24ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_0237f414(object, descriptor);
    }
    return object;
}
