struct Opaque_029691bc_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_029691bc {
    unsigned char unknown_00[56];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_55[3];
    Opaque_029691bc_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_1016fbac;

extern "C" void fn_029691bc(Opaque_029691bc* self) {
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    fn_037b8284(self, &data_1016fbac, 0);
}

