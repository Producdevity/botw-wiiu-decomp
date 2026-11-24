struct Opaque_028a4cfc_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_028a4cfc {
    unsigned char unknown_00[76];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_69[3];
    Opaque_028a4cfc_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_028a4cfc(Opaque_028a4cfc* self) {
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
}
