extern "C" const unsigned char data_102fba54[];
extern "C" const unsigned char data_102fba64[];
extern "C" const unsigned char data_102fba7c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03605650(void* object, unsigned flags);
extern "C" void fn_0378da14(void* handle);

struct Opaque_036157ec {
    unsigned char unknown_0[16];
    const void* vtable_10;
    unsigned char unknown_14[144];
    const void* vtable_a4;
    const void* vtable_a8;
    unsigned char unknown_ac[1072];
    unsigned char handle_4dc[4];
};

extern "C" void fn_036157ec(Opaque_036157ec* self, unsigned flags) {
    if (self) {
        self->vtable_10 = data_102fba54;
        self->vtable_a8 = data_102fba64;
        self->vtable_a4 = data_102fba7c;
        fn_0378da14(self->handle_4dc);
        fn_03605650(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
