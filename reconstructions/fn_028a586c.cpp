struct Opaque_028a586c_vtable {
    unsigned char unknown_00[28];
    void (*release)(void* handle);
};

struct Opaque_028a586c {
    unsigned char unknown_00[80];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_6d[3];
    Opaque_028a586c_vtable* vtable;
};

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_028a586c(Opaque_028a586c* self) {
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
}
