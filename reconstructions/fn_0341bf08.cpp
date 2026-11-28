extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0361e0e0(void*);
extern "C" unsigned char data_102c12a4[];

extern "C" void fn_0341bf08(void* self, int flags)
{
    unsigned char* vtable = data_102c12a4;
    if (self != 0) {
        *(unsigned char**)((char*)self + 4) = vtable;
        fn_0361e0e0(*(void**)self);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
