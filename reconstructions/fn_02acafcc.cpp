extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bfe844(void*, const void*);

extern "C" void* fn_02acafcc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_02bfe844(object, descriptor);
    }
    return object;
}
