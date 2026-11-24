struct Opaque_033057d0;

struct Opaque_033057d0_vtable {
    unsigned char unknown_00[68];
    void (*callback)(Opaque_033057d0* self);
};

struct Opaque_033057d0 {
    unsigned char unknown_00[8];
    unsigned char handle[16];
    unsigned short count;
    unsigned char unknown_1a[2];
    Opaque_033057d0_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_033057d0(Opaque_033057d0* self) {
    self->vtable->callback(self);
    unsigned short cleared = 0;
    self->count = cleared;
    fn_0378da14(self->handle);
}
