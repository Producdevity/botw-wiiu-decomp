extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02541870(void*, const void*);

extern "C" void* fn_02acb6b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_02541870(object, descriptor);
    }
    return object;
}
