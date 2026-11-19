extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0226ce94(void*, const void*);

extern "C" void* fn_02ab97e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_0226ce94(object, descriptor);
    }
    return object;
}
