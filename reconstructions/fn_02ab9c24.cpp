extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02272058(void*, const void*);

extern "C" void* fn_02ab9c24(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02272058(object, descriptor);
    }
    return object;
}
