struct Opaque_0250c2d0_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_0250c2d0 {
    void* context;
    unsigned char unknown_04[28];
    unsigned char handle_20[28];
    unsigned char flag_3c;
    unsigned char unknown_3d[3];
    Opaque_0250c2d0_vtable* vtable_40;
};

extern "C" void fn_0339bd70(void *);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" void fn_0378da14(void* handle);
extern "C" int data_100d3088;

extern "C" void fn_0250c2d0(Opaque_0250c2d0* self) {
    unsigned char cleared = 0;
    self->flag_3c = cleared;
    fn_0378da14(self->handle_20);
    self->vtable_40->release(self->handle_20);
    fn_0339bd70(self->context);
    fn_037b8284(self, &data_100d3088, 0);
}

