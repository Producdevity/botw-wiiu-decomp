extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024464fc(void*, const void*);

extern "C" void* fn_02ab9b9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_024464fc(object, descriptor);
    }
    return object;
}
