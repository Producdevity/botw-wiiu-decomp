extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030b7184(void *, unsigned);
extern "C" unsigned char data_1032cf18[];

extern "C" void fn_03888048(void* self, int flags)
{
    unsigned char* vtable = data_1032cf18;
    if (self != 0) {
        *(unsigned char**)((char*)self + 52) = vtable;
        fn_030b7184(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
