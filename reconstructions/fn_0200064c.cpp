struct Opaque_0200064c {
    const void* vtable;
    unsigned char unknown_04[232];
    const void* vtable_ec;
    const void* vtable_f0;
    unsigned char unknown_f4[1752];
    unsigned char handle[4];
};

extern "C" const unsigned char data_1000057c[];
extern "C" const unsigned char data_1000058c[];
extern "C" const unsigned char data_100005a4[];
extern "C" void fn_02af3f8c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_0200064c(Opaque_0200064c* self, unsigned flags) {
    if (self) {
        self->vtable = data_1000057c;
        self->vtable_f0 = data_1000058c;
        self->vtable_ec = data_100005a4;
        fn_0378da14(self->handle);
        fn_02af3f8c(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
