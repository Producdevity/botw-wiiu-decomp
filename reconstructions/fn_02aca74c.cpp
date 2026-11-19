extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250cafc(void*, const void*);

extern "C" void* fn_02aca74c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0250cafc(object, descriptor);
    }
    return object;
}
