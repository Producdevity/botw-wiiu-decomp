extern "C" void fn_020dfebc(void *);
extern "C" void fn_020dff88(void *);

extern "C" int fn_020dffa8(void *self)
{
  char *flag = (char *)self + 0x5C;
  fn_020dfebc(self);
  *flag = 1;
  fn_020dff88(self);
  return 1;
}
