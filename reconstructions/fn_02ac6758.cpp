extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0243f440(void*, const void*);

extern "C" void* fn_02ac6758(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0243f440(object, descriptor);
    }
    return object;
}
