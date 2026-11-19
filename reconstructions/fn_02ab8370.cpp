extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223b5a4(void*, const void*);

extern "C" void* fn_02ab8370(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_0223b5a4(object, descriptor);
    }
    return object;
}
