extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026a7e70(void*, const void*);

extern "C" void* fn_02acf6fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_026a7e70(object, descriptor);
    }
    return object;
}
