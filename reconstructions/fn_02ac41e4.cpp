extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023bef8c(void*, const void*);

extern "C" void* fn_02ac41e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_023bef8c(object, descriptor);
    }
    return object;
}
