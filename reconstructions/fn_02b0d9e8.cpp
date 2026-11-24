struct Opaque_fn_02b0d9e8_vtable { unsigned char unknown_00[28]; void (*release)(void* handle); };
struct Opaque_fn_02b0d9e8 {
    unsigned char unknown_00[32];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_pad[3];
    Opaque_fn_02b0d9e8_vtable* vtable;
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_02b0d97c(void* object);
extern "C" void fn_02b0d9e8(Opaque_fn_02b0d9e8* self) {
    if (self->flag) {
        fn_02b0d97c(self);
        unsigned char cleared = 0;
        self->flag = cleared;
        fn_0378da14(self->handle);
        self->vtable->release(self->handle);
    }
}
