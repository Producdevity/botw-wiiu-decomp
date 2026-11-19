extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0208ddac(void*, const void*);

extern "C" void* fn_02ac1c70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(204, allocator, 4);
    if (object) {
        object = fn_0208ddac(object, descriptor);
    }
    return object;
}
