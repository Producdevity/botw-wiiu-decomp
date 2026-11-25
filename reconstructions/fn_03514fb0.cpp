extern "C" void fn_03511f40(void *, void *);

extern "C" void fn_03514fb0(void *self, void *other)
{
  *((char *)self + 0x66) = 0;
  int done = *((unsigned char *)self + 0x64);
  if (done == 0) {
    fn_03511f40((char *)self + 4, other);
    *((unsigned char *)self + 0x64) = 1;
  }
}
