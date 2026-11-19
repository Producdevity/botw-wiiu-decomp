extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02986c94(void*, const void*);

extern "C" void* fn_02adb74c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02986c94(object, descriptor);
    }
    return object;
}
