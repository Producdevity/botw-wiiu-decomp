struct Opaque_02ae48b0_vtable { unsigned char unknown_00[28]; void (*release)(void* handle); };
struct Opaque_02ae48b0 {
    unsigned char unknown_00[96];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_7d[3];
    Opaque_02ae48b0_vtable* vtable;
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_02ae3768(void* object);
static inline void release_02ae48b0(Opaque_02ae48b0* self) {
    if (self->flag) fn_02ae3768(self);
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
}

extern "C" void fn_02ae48b0(void* object) {
    release_02ae48b0(static_cast<Opaque_02ae48b0*>(object));
}
