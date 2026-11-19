extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223d720(void*, const void*);

extern "C" void* fn_02ab8480(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(540, allocator, 4);
    if (object) {
        object = fn_0223d720(object, descriptor);
    }
    return object;
}
