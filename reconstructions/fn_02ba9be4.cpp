extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" unsigned char data_101b5778[];

extern "C" void fn_02ba9be4(void* self, int flags)
{
    if (self != 0) {
        void* member = (char*)self + 4;
        *(unsigned char**)((char*)self + 20) = data_101b5778;
        fn_030eb73c(member, 2);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
