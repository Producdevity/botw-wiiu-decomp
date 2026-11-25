extern "C" void fn_0344e6a0(void *, void *);
extern "C" void fn_03c6fe90(void *, void *, void *);

extern "C" void fn_0344e6bc(void *self, void *other)
{
  fn_0344e6a0(self, other);
  void *field = (char *)self + 0x70;
  fn_03c6fe90(other, field, other);
}
