extern "C" const unsigned char data_1021b0b0[];
extern "C" void fn_02e91254(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" bool fn_0378da88(void* context);

struct Opaque_02e9a384 {
    unsigned char unknown_0[60];
    const void* vtable_3c;
    unsigned char unknown_40[8];
    unsigned char handle_48[4];
};

extern "C" void fn_02e9a384(Opaque_02e9a384* self, unsigned flags) {
    if (self) {
        self->vtable_3c = data_1021b0b0;
        if (fn_0378da88(self->handle_48)) {
            fn_0378da14(self->handle_48);
        }
        fn_0378da14(self->handle_48);
        fn_02e91254(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
