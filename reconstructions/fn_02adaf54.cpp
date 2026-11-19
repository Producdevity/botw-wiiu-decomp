extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02969d94(void*, const void*);

extern "C" void* fn_02adaf54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_02969d94(object, descriptor);
    }
    return object;
}
