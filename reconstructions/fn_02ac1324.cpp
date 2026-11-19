extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ce99ec(void*, const void*);

extern "C" void* fn_02ac1324(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02ce99ec(object, descriptor);
    }
    return object;
}
