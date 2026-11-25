extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_1014a290;

extern "C" void fn_0286fd84(void *self)
{
  fn_037b8284(self, &data_1014a290, 0);
  int *state = (int *)((char *)self + 0x20);
  *state = 1;
  *((char *)self + 0x28) = 0;
}
