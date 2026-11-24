struct Opaque_026c32d8_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_026c32d8 {
    unsigned char unknown_00[48];
    unsigned char handle_30[28];
    unsigned char flag_4c;
    unsigned char unknown_4d[3];
    Opaque_026c32d8_vtable* vtable_50;
};

extern "C" void fn_026c3228(void* object);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_026c32d8(Opaque_026c32d8* self) {
    unsigned char cleared = 0;
    self->flag_4c = cleared;
    fn_0378da14(self->handle_30);
    self->vtable_50->release(self->handle_30);
    fn_026c3228(self);
}

