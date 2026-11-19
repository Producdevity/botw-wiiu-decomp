extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cc2874(void*, const void*);

extern "C" void* fn_02ac0884(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_02cc2874(object, descriptor);
    }
    return object;
}
