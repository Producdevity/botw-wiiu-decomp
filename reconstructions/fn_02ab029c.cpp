extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0206c764(void*, const void*);

extern "C" void* fn_02ab029c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0206c764(object, descriptor);
    }
    return object;
}
