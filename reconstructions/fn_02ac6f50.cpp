extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024514fc(void*, const void*);

extern "C" void* fn_02ac6f50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_024514fc(object, descriptor);
    }
    return object;
}
