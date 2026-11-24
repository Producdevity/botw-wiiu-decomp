struct Opaque_033b89bc {
    unsigned char unknown_00[0x5f8];
    signed char state;
    unsigned char unknown_5f9[0x17];
    unsigned char handle_a[0x18];
    unsigned char handle_b[0x18];
};

extern "C" void fn_0339f860(void* self);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_033b89bc(Opaque_033b89bc* self) {
    fn_0339f860(self);
    fn_0378da14(self->handle_a);
    fn_0378da14(self->handle_b);
    self->state = -1;
}
