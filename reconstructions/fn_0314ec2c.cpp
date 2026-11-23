extern "C" void* fn_0308e5a0(unsigned int size, void* allocator, int alignment);
extern "C" void fn_0314e8dc(void* object, void* owner);

extern "C" void fn_0314ec2c(void* p, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object)
        fn_0314e8dc(object, p);
}
