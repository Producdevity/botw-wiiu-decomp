extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0293de90(void*, const void*);

extern "C" void* fn_02ada7a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0293de90(object, descriptor);
    }
    return object;
}
