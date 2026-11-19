extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ce7c88(void*, const void*);

extern "C" void* fn_02ac12e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_02ce7c88(object, descriptor);
    }
    return object;
}
