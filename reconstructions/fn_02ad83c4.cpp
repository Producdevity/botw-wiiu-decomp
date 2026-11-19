extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028b2e50(void*, const void*);

extern "C" void* fn_02ad83c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(436, allocator, 4);
    if (object) {
        object = fn_028b2e50(object, descriptor);
    }
    return object;
}
