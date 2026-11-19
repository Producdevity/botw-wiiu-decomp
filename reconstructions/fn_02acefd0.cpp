extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026314ec(void*, const void*);

extern "C" void* fn_02acefd0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_026314ec(object, descriptor);
    }
    return object;
}
