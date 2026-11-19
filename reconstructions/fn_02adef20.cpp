extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d0808(void*, const void*);

extern "C" void* fn_02adef20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(408, allocator, 4);
    if (object) {
        object = fn_029d0808(object, descriptor);
    }
    return object;
}
