extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028017fc(void*, const void*);

extern "C" void* fn_02ad5658(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_028017fc(object, descriptor);
    }
    return object;
}
