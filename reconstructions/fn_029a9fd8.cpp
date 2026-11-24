struct Opaque_029a9fd8 {
    unsigned char unknown_00[36];
    unsigned char handle_24[12];
    unsigned char handle_30[12];
    unsigned char handle_3c[12];
    unsigned char unknown_48[52];
    unsigned char flag;
};

extern "C" void fn_0378da14(void* handle);
extern "C" void fn_029a9f00(void* object);

extern "C" void fn_029a9fd8(Opaque_029a9fd8* self) {
    self->flag = false;
    fn_0378da14(self->handle_30);
    fn_0378da14(self->handle_3c);
    fn_0378da14(self->handle_24);
    fn_029a9f00(self);
}
