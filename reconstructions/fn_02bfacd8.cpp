extern "C" void fn_0308e6d0(void*);
extern "C" void fn_037b7d90(void *, unsigned);
extern "C" unsigned char data_101bd460[];

extern "C" void fn_02bfacd8(void* self, int flags)
{
    unsigned char* vtable = data_101bd460;
    if (self != 0) {
        *(unsigned char**)((char*)self + 36) = vtable;
        fn_037b7d90(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
