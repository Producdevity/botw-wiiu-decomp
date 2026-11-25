extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030b7184(void *, unsigned);
extern "C" unsigned char data_10298eb0[];

extern "C" void fn_0323ecd8(void* self, int flags)
{
    unsigned char* vtable = data_10298eb0;
    if (self != 0) {
        *(unsigned char**)self = vtable;
        fn_030b7184(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
