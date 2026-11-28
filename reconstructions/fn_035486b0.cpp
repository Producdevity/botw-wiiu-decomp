extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0354e69c(void *, unsigned);
extern "C" unsigned char data_102dfd84[];

extern "C" void fn_035486b0(void* self, unsigned flags)
{
    unsigned char* vtable = data_102dfd84;
    if (self != 0) {
        *(unsigned char**)self = vtable;
        fn_0354e69c(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
