extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02297640(void*, const void*);

extern "C" void* fn_02aba4a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_02297640(object, descriptor);
    }
    return object;
}
