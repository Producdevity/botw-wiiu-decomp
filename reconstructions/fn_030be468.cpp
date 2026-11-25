extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030be524(void*, unsigned);
extern "C" unsigned char data_1027b05c[];

extern "C" void fn_030be468(void* self, int flags)
{
    unsigned char* vtable = data_1027b05c;
    if (self != 0) {
        *(unsigned char**)((char*)self + 320) = vtable;
        fn_030be524(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
