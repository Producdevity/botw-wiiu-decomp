extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02596418(void*, const void*);

extern "C" void* fn_02ac95c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_02596418(object, descriptor);
    }
    return object;
}
