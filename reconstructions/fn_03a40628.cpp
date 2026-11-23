extern "C" void* fn_0308e5a0(unsigned int size, void* allocator, int alignment);
extern "C" void fn_03a2f540(void* object, void* owner);

extern "C" void fn_03a40628(void* p, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object)
        fn_03a2f540(object, p);
}
