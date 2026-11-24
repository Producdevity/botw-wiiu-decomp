extern "C" const unsigned char data_10147864[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" bool fn_0378da88(void* context);
extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_037d6a30(void*, int);

struct Opaque_02858c50 {
    unsigned char unknown_0[12];
    const void* vtable_c;
    unsigned char unknown_10[16];
    unsigned char handle_20[4];
    unsigned char unknown_24[8];
    unsigned char handle_2c[4];
    unsigned char unknown_30[8];
    unsigned char base_38[4];
};

extern "C" void fn_02858c50(Opaque_02858c50* self, unsigned flags) {
    if (self) {
        self->vtable_c = data_10147864;
        if (fn_0378da88(self->handle_20)) {
            fn_0378da14(self->handle_20);
        }
        if (fn_0378da88(self->handle_2c)) {
            fn_0378da14(self->handle_2c);
        }
        fn_037d6a30(self->base_38, 2);
        fn_0378da14(self->handle_2c);
        fn_0378da14(self->handle_20);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
