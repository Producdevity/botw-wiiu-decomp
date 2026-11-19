extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02349cec(void*, const void*);

extern "C" void* fn_02abe5fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02349cec(object, descriptor);
    }
    return object;
}
