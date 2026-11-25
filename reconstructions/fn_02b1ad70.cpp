extern "C" void fn_02b18140(void *, void *);

extern "C" void fn_02b1ad70(void *self)
{
  char zero = 0;
  *((char *)self + 0x90) = zero;
  fn_02b18140(self, (char *)self + 4);
  *((char *)self + 0x14) = zero;
}
