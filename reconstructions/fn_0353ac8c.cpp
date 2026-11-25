extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030b7184(void *, unsigned);
extern "C" unsigned char data_102db5f4[];

extern "C" void fn_0353ac8c(void* self, int flags)
{
    unsigned char* vtable = data_102db5f4;
    if (self != 0) {
        *(unsigned char**)((char*)self + 52) = vtable;
        fn_030b7184(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
