extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026dbaa4(void*, const void*);

extern "C" void* fn_02ac93a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_026dbaa4(object, descriptor);
    }
    return object;
}
