extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02272b44(void*, const void*);

extern "C" void* fn_02ab9c68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_02272b44(object, descriptor);
    }
    return object;
}
