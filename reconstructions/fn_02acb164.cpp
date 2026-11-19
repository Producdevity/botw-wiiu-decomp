extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02532eec(void*, const void*);

extern "C" void* fn_02acb164(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02532eec(object, descriptor);
    }
    return object;
}
