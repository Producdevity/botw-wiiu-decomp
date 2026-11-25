extern "C" void fn_0308e6d0(void*);
extern "C" void fn_02f372a4(void*, void*);
extern "C" unsigned char data_1022a734[];

extern "C" void fn_02f37ef4(void* self, int flags)
{
    unsigned char* vtable = data_1022a734;
    if (self != 0) {
        *(unsigned char**)((char*)self + 24) = vtable;
        fn_02f372a4(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
