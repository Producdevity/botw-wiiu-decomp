extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02780660(void*, const void*);

extern "C" void* fn_02acb84c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(620, allocator, 4);
    if (object) {
        object = fn_02780660(object, descriptor);
    }
    return object;
}
