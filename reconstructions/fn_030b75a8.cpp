extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030b6ff0(void*, void*);
extern "C" unsigned char data_1027a664[];

extern "C" void fn_030b75a8(void* self, int flags)
{
    unsigned char* vtable = data_1027a664;
    if (self != 0) {
        *(unsigned char**)((char*)self + 28) = vtable;
        fn_030b6ff0(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
