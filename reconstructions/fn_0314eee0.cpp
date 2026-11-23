extern "C" void* fn_0308e5a0(unsigned int size, void* allocator, int alignment);
extern "C" void fn_0314ec70(void* object, void* owner);

extern "C" void fn_0314eee0(void* p, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object)
        fn_0314ec70(object, p);
}
