extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02513eac(void*, const void*);

extern "C" void* fn_02acaa38(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_02513eac(object, descriptor);
    }
    return object;
}
