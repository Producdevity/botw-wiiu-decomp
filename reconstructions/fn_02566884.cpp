struct Opaque_02566884_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_02566884 {
    unsigned char unknown_00[32];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_3d[3];
    Opaque_02566884_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_100e149c;

extern "C" void fn_02566884(void* object) {
    Opaque_02566884* self = static_cast<Opaque_02566884*>(object);
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_100e149c, 0);
}

