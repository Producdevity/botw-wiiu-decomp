extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0264c6fc(void*, const void*);

extern "C" void* fn_02acf674(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0264c6fc(object, descriptor);
    }
    return object;
}
