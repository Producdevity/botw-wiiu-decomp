extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250d074(void*, const void*);

extern "C" void* fn_02aca790(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_0250d074(object, descriptor);
    }
    return object;
}
