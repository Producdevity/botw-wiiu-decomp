extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225eae4(void*, const void*);

extern "C" void* fn_02ab9074(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(464, allocator, 4);
    if (object) {
        object = fn_0225eae4(object, descriptor);
    }
    return object;
}
