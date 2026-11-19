extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02898410(void*, const void*);

extern "C" void* fn_02ac90b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02898410(object, descriptor);
    }
    return object;
}
