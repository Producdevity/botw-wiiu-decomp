extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0245d664(void*, const void*);

extern "C" void* fn_02ab524c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0245d664(object, descriptor);
    }
    return object;
}
