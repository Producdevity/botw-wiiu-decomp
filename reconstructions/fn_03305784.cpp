struct Opaque_03305784;
struct Opaque_03305784_vtable {
    unsigned char unknown_00[60];
    void (*callback)(Opaque_03305784* self);
};
struct Opaque_03305784 {
    unsigned char unknown_00[8];
    unsigned char handle[16];
    unsigned short count;
    unsigned char unknown_1a[2];
    Opaque_03305784_vtable* vtable;
};
extern "C" void fn_0378da14(void* handle);
extern "C" bool fn_03305784(Opaque_03305784 *self)
{
  void (*callback)(Opaque_03305784 *);
  (callback = self->vtable->callback)(self);
  self->count = 0;
  fn_0378da14(self->handle);
  return true;
}
