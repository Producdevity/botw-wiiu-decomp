extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027cc7b4(void*, const void*);

extern "C" void* fn_02ad40d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1972, allocator, 4);
    if (object) {
        object = fn_027cc7b4(object, descriptor);
    }
    return object;
}
