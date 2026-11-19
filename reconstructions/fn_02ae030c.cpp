extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029e33e4(void*, const void*);

extern "C" void* fn_02ae030c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029e33e4(object, descriptor);
    }
    return object;
}
