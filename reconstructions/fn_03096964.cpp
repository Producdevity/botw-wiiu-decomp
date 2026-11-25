extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03096a5c(void*, void*);
extern "C" unsigned char data_1025f814[];

extern "C" void fn_03096964(void* self, int flags)
{
    unsigned char* vtable = data_1025f814;
    if (self != 0) {
        *(unsigned char**)((char*)self + 28) = vtable;
        fn_03096a5c(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
