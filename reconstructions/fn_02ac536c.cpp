extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02092870(void*, const void*);

extern "C" void* fn_02ac536c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02092870(object, descriptor);
    }
    return object;
}
