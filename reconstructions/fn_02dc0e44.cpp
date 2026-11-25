extern "C" void fn_0308e6d0(void*);
extern "C" void fn_031b8c48(void*, void*);
extern "C" unsigned char data_101eb420[];

extern "C" void fn_02dc0e44(void* self, int flags)
{
    unsigned char* vtable = data_101eb420;
    if (self != 0) {
        *(unsigned char**)((char*)self + 1036) = vtable;
        fn_031b8c48(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
