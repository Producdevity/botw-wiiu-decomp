extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027db490(void*, const void*);

extern "C" void* fn_02ad46f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(560, allocator, 4);
    if (object) {
        object = fn_027db490(object, descriptor);
    }
    return object;
}
