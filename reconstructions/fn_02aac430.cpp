extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_034ff690(void*, const void*);

extern "C" void* fn_02aac430(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_034ff690(object, descriptor);
    }
    return object;
}
