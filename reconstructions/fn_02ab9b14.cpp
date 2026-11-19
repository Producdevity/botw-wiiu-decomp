extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024309b0(void*, const void*);

extern "C" void* fn_02ab9b14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_024309b0(object, descriptor);
    }
    return object;
}
