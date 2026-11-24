struct Opaque_029339f0_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_029339f0 {
    unsigned char unknown_00[32];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_3d[3];
    Opaque_029339f0_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_10169f2c;

extern "C" void fn_029339f0(void** object) {
    Opaque_029339f0* self = reinterpret_cast<Opaque_029339f0*>(object);
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_10169f2c, 0);
}

