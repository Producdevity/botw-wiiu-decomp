extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02122d64(void*, const void*);

extern "C" void* fn_02aaf400(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1240, allocator, 4);
    if (object) {
        object = fn_02122d64(object, descriptor);
    }
    return object;
}
