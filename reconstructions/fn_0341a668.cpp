struct Object;
extern "C" void fn_0308e6d0(void*);
extern "C" void fn_037e58bc(Object *, unsigned);
extern "C" unsigned char data_102c1244[];

extern "C" void fn_0341a668(Object* self, int flags)
{
    unsigned char* vtable = data_102c1244;
    if (self != 0) {
        *(unsigned char**)((char*)self + 24) = vtable;
        fn_037e58bc(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}
