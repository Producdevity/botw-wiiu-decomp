struct Opaque_02550ce4_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_02550ce4 {
    unsigned char unknown_00[72];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_65[3];
    Opaque_02550ce4_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_02550ce4(void* object) {
    Opaque_02550ce4* self = static_cast<Opaque_02550ce4*>(object);
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
}
