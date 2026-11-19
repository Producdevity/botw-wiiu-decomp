extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029bc0fc(void*, const void*);

extern "C" void* fn_02addeec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_029bc0fc(object, descriptor);
    }
    return object;
}
