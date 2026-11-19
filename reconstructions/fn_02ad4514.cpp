extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027cbb90(void*, const void*);

extern "C" void* fn_02ad4514(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(604, allocator, 4);
    if (object) {
        object = fn_027cbb90(object, descriptor);
    }
    return object;
}
