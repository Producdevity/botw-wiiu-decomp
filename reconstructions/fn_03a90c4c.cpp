extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03acd780(void *, unsigned);
extern "C" unsigned char data_10363f34[];

extern "C" void fn_03a90c4c(void* self, unsigned flags)
{
    unsigned char* vtable = data_10363f34;
    if (self != 0) {
        *(unsigned char**)((char*)self + 28) = vtable;
        fn_03acd780((char*)self + 28, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
