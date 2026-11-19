extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0254ea34(void*, const void*);

extern "C" void* fn_02acbb7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0254ea34(object, descriptor);
    }
    return object;
}
