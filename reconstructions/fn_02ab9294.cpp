extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02264fa8(void*, const void*);

extern "C" void* fn_02ab9294(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_02264fa8(object, descriptor);
    }
    return object;
}
