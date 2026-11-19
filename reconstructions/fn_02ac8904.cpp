extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03271824(void*, const void*);

extern "C" void* fn_02ac8904(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_03271824(object, descriptor);
    }
    return object;
}
