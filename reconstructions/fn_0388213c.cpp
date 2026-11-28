struct Object;
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037e58bc(Object* object, unsigned flags);
extern "C" unsigned char data_1032be60[];

extern "C" void fn_0388213c(Object* self, int flags)
{
    unsigned char* vtable = data_1032be60;
    if (self != 0) {
        *(unsigned char**)((char*)self + 24) = vtable;
        fn_037e58bc(self, 0);
        if (flags & 1)
            fn_0308e6d0(self);
    }
}

// TYPE-UNRESOLVED flags