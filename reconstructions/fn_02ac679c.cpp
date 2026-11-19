extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02440b94(void*, const void*);

extern "C" void* fn_02ac679c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_02440b94(object, descriptor);
    }
    return object;
}
