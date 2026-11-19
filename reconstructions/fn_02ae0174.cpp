extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029e1240(void*, const void*);

extern "C" void* fn_02ae0174(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_029e1240(object, descriptor);
    }
    return object;
}
