extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03a3e59c(void*, void*);
extern "C" unsigned char data_102f8f48[];

extern "C" void fn_03604b58(void* self, int flags)
{
    unsigned char* vtable = data_102f8f48;
    if (self != 0) {
        *(unsigned char**)((char*)self + 16) = vtable;
        fn_03a3e59c(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
