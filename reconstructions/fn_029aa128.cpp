struct Opaque_029aa128 {
    unsigned char unknown_00[36];
    unsigned char handle_24[12];
    unsigned char handle_30[12];
    unsigned char handle_3c[4];
};

extern "C" int fn_02e1aeec(void* context);
extern "C" void fn_0378da14(void* handle);
extern "C" bool fn_0378da88(void* context);

extern "C" void fn_029aa128(Opaque_029aa128* self) {
    if (fn_0378da88(self->handle_30) || fn_0378da88(self->handle_3c) || fn_0378da88(self->handle_24)) {
        if (fn_02e1aeec(0) == 0) {
            fn_0378da14(self->handle_30);
            fn_0378da14(self->handle_3c);
            fn_0378da14(self->handle_24);
        }
    }
}
