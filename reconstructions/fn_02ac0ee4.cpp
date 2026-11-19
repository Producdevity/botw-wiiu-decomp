extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cdd014(void*, const void*);

extern "C" void* fn_02ac0ee4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cdd014(object, descriptor);
    }
    return object;
}
