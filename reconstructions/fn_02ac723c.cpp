extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0245c3fc(void*, const void*);

extern "C" void* fn_02ac723c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0245c3fc(object, descriptor);
    }
    return object;
}
