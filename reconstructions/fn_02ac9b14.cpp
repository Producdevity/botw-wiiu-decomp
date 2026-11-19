extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026fc408(void*, const void*);

extern "C" void* fn_02ac9b14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(316, allocator, 4);
    if (object) {
        object = fn_026fc408(object, descriptor);
    }
    return object;
}
