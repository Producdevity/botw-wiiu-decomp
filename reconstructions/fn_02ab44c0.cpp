extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021c2664(void*, const void*);

extern "C" void* fn_02ab44c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021c2664(object, descriptor);
    }
    return object;
}
