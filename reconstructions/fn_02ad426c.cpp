extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02784708(void*, const void*);

extern "C" void* fn_02ad426c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(636, allocator, 4);
    if (object) {
        object = fn_02784708(object, descriptor);
    }
    return object;
}
