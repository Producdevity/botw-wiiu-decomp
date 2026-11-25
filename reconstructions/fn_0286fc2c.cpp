extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_1014a264;

extern "C" void fn_0286fc2c(void *self)
{
  fn_037b8284(self, &data_1014a264, 0);
  char *flag = (char *)self + 0x28;
  *(int *)((char *)self + 0x20) = 1;
  *flag = 0;
}
