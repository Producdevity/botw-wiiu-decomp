struct Opaque_0256b9f4_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_0256b9f4 {
    unsigned char unknown_00[88];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_75[3];
    Opaque_0256b9f4_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_0256b9f4(Opaque_0256b9f4* self) {
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
}
