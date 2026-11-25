extern "C" void fn_02868b0c(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_101496b4;

extern "C" void fn_02868ca8(void *self)
{
  char *flag = (char *)self + 0x21;
  *flag = 0;
  fn_02868b0c(self);
  fn_037b8284(self, &data_101496b4, 0);
}
