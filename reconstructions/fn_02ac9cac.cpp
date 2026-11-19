extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025d7af0(void*, const void*);

extern "C" void* fn_02ac9cac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_025d7af0(object, descriptor);
    }
    return object;
}
