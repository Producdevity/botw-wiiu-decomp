extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032bda80(void*, const void*);

extern "C" void* fn_02aaafbc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_032bda80(object, descriptor);
    }
    return object;
}
