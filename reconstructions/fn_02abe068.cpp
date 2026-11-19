extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02340144(void*, const void*);

extern "C" void* fn_02abe068(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02340144(object, descriptor);
    }
    return object;
}
