extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cac7c4(void*, const void*);

extern "C" void* fn_02ac0378(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cac7c4(object, descriptor);
    }
    return object;
}
