extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03306e90(void*, unsigned int);
extern "C" unsigned char data_100c11ac[];

extern "C" void fn_0247f838(void* self, int flags)
{
    unsigned char* vtable = data_100c11ac;
    if (self != 0) {
        *(unsigned char**)((char*)self + 292) = vtable;
        fn_03306e90(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
