extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ce0afc(void*, const void*);

extern "C" void* fn_02ac107c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02ce0afc(object, descriptor);
    }
    return object;
}
