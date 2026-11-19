extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d18dc(void*, const void*);

extern "C" void* fn_02ac9690(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_024d18dc(object, descriptor);
    }
    return object;
}
