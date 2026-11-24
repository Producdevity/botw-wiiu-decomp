struct Opaque_0256681c_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_0256681c {
    unsigned char unknown_00[32];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_3d[3];
    Opaque_0256681c_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_100e1490;

extern "C" void fn_0256681c(void* object) {
    Opaque_0256681c* self = static_cast<Opaque_0256681c*>(object);
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_100e1490, 0);
}

