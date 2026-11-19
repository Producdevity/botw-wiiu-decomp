extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025b3858(void*, const void*);

extern "C" void* fn_02acd4fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(396, allocator, 4);
    if (object) {
        object = fn_025b3858(object, descriptor);
    }
    return object;
}
