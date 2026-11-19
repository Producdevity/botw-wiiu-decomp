extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b2e78(void*, const void*);

extern "C" void* fn_02aab3fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_032b2e78(object, descriptor);
    }
    return object;
}
