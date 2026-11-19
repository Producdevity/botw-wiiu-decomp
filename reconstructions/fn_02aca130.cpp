extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026faccc(void*, const void*);

extern "C" void* fn_02aca130(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(704, allocator, 4);
    if (object) {
        object = fn_026faccc(object, descriptor);
    }
    return object;
}
