extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03670f78(void*, void*);
extern "C" unsigned char data_103015c4[];

extern "C" void fn_0365ce80(void* self, int flags)
{
    unsigned char* vtable = data_103015c4;
    if (self != 0) {
        *(unsigned char**)((char*)self + 12) = vtable;
        fn_03670f78(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
