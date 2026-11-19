extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025a3a1c(void*, const void*);

extern "C" void* fn_02acd188(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_025a3a1c(object, descriptor);
    }
    return object;
}
