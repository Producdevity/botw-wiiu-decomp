extern "C" void fn_0308e6d0(void*);
extern "C" void fn_0397a7cc(void*, int);
extern "C" unsigned char data_10213ea4[];

extern "C" void fn_02e37db8(void* self, int flags)
{
    unsigned char* vtable = data_10213ea4;
    if (self != 0) {
        *(unsigned char**)((char*)self + 16) = vtable;
        fn_0397a7cc(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
