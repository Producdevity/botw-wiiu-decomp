struct Opaque_025c4170_vtable { unsigned char unknown_00[28]; void (*release)(void* handle); };
struct Opaque_025c4170 {
    unsigned char unknown_00[240];
    unsigned char handle[28];
    unsigned char flag;
    unsigned char unknown_10d[3];
    Opaque_025c4170_vtable* vtable;
    unsigned char unknown_114[80];
    unsigned char guard;
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_025c239c(void* object, int value);
extern "C" void fn_025c4170(Opaque_025c4170* self) {
    unsigned char cleared = 0;
    self->flag = cleared;
    fn_0378da14(self->handle);
    self->vtable->release(self->handle);
    if (!self->guard) fn_025c239c(self, 1);
}
