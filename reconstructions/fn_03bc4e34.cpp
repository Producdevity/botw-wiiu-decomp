extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03bc52d4(void *, unsigned);
extern "C" unsigned char data_103cd9a8[];

extern "C" void fn_03bc4e34(void* self, int flags)
{
    unsigned char* vtable = data_103cd9a8;
    if (self != 0) {
        *(unsigned char**)((char*)self + 56) = vtable;
        fn_03bc52d4((char*)self + 80, 2);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
