extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cc05a8(void*, const void*);

extern "C" void* fn_02ac0774(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_02cc05a8(object, descriptor);
    }
    return object;
}
