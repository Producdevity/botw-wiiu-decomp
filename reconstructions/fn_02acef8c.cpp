extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0262f880(void*, const void*);

extern "C" void* fn_02acef8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_0262f880(object, descriptor);
    }
    return object;
}
