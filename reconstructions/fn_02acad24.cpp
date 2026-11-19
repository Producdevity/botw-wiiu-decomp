extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02526438(void*, const void*);

extern "C" void* fn_02acad24(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(300, allocator, 4);
    if (object) {
        object = fn_02526438(object, descriptor);
    }
    return object;
}
