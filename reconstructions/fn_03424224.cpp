extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030bbd6c(void*, void*);
extern "C" unsigned char data_102c31cc[];

extern "C" void fn_03424224(void* self, int flags)
{
    unsigned char* vtable = data_102c31cc;
    if (self != 0) {
        *(unsigned char**)((char*)self + 24) = vtable;
        fn_030bbd6c(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
