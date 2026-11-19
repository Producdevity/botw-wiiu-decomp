extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02620680(void*, const void*);

extern "C" void* fn_02aceb08(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(696, allocator, 4);
    if (object) {
        object = fn_02620680(object, descriptor);
    }
    return object;
}
