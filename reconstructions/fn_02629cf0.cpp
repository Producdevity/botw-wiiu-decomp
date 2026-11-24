struct Opaque_02629cf0_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_02629cf0 {
    unsigned char unknown_00[84];
    unsigned char handle_54[28];
    unsigned char flag_70;
    unsigned char unknown_71[3];
    Opaque_02629cf0_vtable* vtable_74;
};

extern "C" void fn_02629a94(void* object);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_02629cf0(Opaque_02629cf0* self) {
    unsigned char cleared = 0;
    self->flag_70 = cleared;
    fn_0378da14(self->handle_54);
    self->vtable_74->release(self->handle_54);
    fn_02629a94(self);
}

