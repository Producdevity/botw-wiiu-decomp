extern "C" void fn_0308e6d0(void*);
extern "C" void fn_035486b0(void *, unsigned);
extern "C" unsigned char data_102d7838[];

extern "C" void fn_035282bc(void* self, int flags)
{
    unsigned char* vtable = data_102d7838;
    if (self != 0) {
        *(unsigned char**)((char*)self + 4) = vtable;
        fn_035486b0((char*)self + 4, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
