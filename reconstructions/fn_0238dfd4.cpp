struct Opaque_0238dfd4 {
    unsigned char unknown_00[140];
    unsigned char handle[104];
    unsigned char flag_a;
    unsigned char flag_b;
    unsigned char unknown_f6[34];
    unsigned char payload[12];
    unsigned char ready;
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_02140484(void* object);
extern "C" void fn_0238de14(void* object, void* payload);
extern "C" void fn_0238dfd4(Opaque_0238dfd4* self) {
    fn_02140484(self);
    fn_0378da14(self->handle);
    self->flag_a = 0;
    self->flag_b = 0;
    self->ready = 1;
    fn_0238de14(self, self->payload);
}
