struct Opaque_025669e0_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_025669e0 {
    void* context;
    unsigned char unknown_04[28];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_3d[3];
    Opaque_025669e0_vtable* vtable;
};

extern "C" void fn_0339bd70(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_100e14b4;

extern "C" void fn_025669e0(Opaque_025669e0* self) {
    fn_0339bd70(self->context);
    self->flag = false;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_100e14b4, 0);
}

