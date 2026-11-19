extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0241f814(void*, const void*);

extern "C" void* fn_02ac5e94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_0241f814(object, descriptor);
    }
    return object;
}
