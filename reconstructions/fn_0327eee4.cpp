extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" unsigned char data_1029e914[];

extern "C" void fn_0327eee4(void* self, int flags)
{
    unsigned char* vtable = data_1029e914;
    if (self != 0) {
        *(unsigned char**)((char*)self + 24) = vtable;
        fn_030eb73c((char*)self + 4, 2);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
