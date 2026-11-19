extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02647370(void*, const void*);

extern "C" void* fn_02acf5a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_02647370(object, descriptor);
    }
    return object;
}
