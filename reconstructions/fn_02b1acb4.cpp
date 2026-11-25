extern "C" void fn_02b18140(void *, void *);

extern "C" void fn_02b1acb4(void *self)
{
  *((char *)self + 0xA0) = 0;
  fn_02b18140(self, (char *)self + 4);
  long offset = 0x14;
  *((char *)self + offset) = 0;
}
