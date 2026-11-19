extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026f65fc(void*, const void*);

extern "C" void* fn_02ad20b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_026f65fc(object, descriptor);
    }
    return object;
}
