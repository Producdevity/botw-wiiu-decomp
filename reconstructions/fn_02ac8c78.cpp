extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032741f0(void*, const void*);

extern "C" void* fn_02ac8c78(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(504, allocator, 4);
    if (object) {
        object = fn_032741f0(object, descriptor);
    }
    return object;
}
