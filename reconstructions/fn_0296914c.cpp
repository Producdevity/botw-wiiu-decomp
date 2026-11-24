struct Opaque_0296914c_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_0296914c {
    void* context;
    unsigned char unknown_04[52];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_55[3];
    Opaque_0296914c_vtable* vtable;
};

extern "C" void fn_0339bd70(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_1016fb9c;

extern "C" void fn_0296914c(Opaque_0296914c* self) {
    fn_0339bd70(self->context);
    self->flag = false;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_1016fb9c, 0);
}

