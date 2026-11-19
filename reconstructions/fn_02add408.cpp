extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c02898(void*, const void*);

extern "C" void* fn_02add408(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02c02898(object, descriptor);
    }
    return object;
}
