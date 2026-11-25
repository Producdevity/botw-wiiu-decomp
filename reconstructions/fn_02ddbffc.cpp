extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030bb69c(void*);
extern "C" unsigned char data_101ec8d8[];

extern "C" void fn_02ddbffc(void* self, int flags)
{
    unsigned char* vtable = data_101ec8d8;
    if (self != 0) {
        *(unsigned char**)((char*)self + 4) = vtable;
        fn_030bb69c(*(void**)self);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
