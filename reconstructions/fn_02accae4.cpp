extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025880fc(void*, const void*);

extern "C" void* fn_02accae4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_025880fc(object, descriptor);
    }
    return object;
}
