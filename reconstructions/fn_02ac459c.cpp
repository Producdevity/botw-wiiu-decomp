extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ce1fc(void*, const void*);

extern "C" void* fn_02ac459c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023ce1fc(object, descriptor);
    }
    return object;
}
