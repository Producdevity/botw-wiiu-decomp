extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0299e450(void*, const void*);

extern "C" void* fn_02adbb04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0299e450(object, descriptor);
    }
    return object;
}
