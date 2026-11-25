extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" unsigned char data_101b8888[];

extern "C" void fn_02bc5f30(void* self, int flags)
{
    unsigned char* vtable = data_101b8888;
    if (self != 0) {
        *(unsigned char**)((char*)self + 20) = vtable;
        fn_030eb73c((char*)self + 4, 2);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
