extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030bb69c(void *);
extern "C" unsigned char data_102bcf20[];

extern "C" void fn_033debdc(void* self, int flags)
{
    if (self != 0) {
        *(unsigned char**)((char*)self + 4) = data_102bcf20;
        void* base = *(void**)self;
        fn_030bb69c(base);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
