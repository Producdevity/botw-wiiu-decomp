extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02682974(void*, const void*);

extern "C" void* fn_02ad0554(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02682974(object, descriptor);
    }
    return object;
}
