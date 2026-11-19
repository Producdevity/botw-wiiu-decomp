extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028211cc(void*, const void*);

extern "C" void* fn_02ad5d40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_028211cc(object, descriptor);
    }
    return object;
}
