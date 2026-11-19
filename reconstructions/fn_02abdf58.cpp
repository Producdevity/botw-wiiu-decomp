extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0233cb68(void*, const void*);

extern "C" void* fn_02abdf58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(752, allocator, 4);
    if (object) {
        object = fn_0233cb68(object, descriptor);
    }
    return object;
}
