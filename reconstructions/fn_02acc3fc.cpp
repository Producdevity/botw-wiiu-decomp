extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0256906c(void*, const void*);

extern "C" void* fn_02acc3fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(668, allocator, 4);
    if (object) {
        object = fn_0256906c(object, descriptor);
    }
    return object;
}
