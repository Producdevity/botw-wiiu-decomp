extern "C" void fn_02b57428(void *, void *, void *, void *);
extern "C" void fn_02b57808(void);
extern "C" void fn_02b5794c(void);
extern "C" float data_101af6a0;

extern "C" void fn_02b57a7c(void *self, void *a, void *b, void *c)
{
  *((char *)self + 5) = 0;
  *(void **)((char *)self + 0x228) = b;
  *(void **)((char *)self + 0x22C) = c;
  *(void **)((char *)self + 8) = a;
  *((char *)self + 4) = 0;
  fn_02b57428(self, a, b, c);
  fn_02b57808();
  fn_02b5794c();
  *(float *)((char *)self + 0x238) = data_101af6a0;
  *(float *)((char *)self + 0x234) = data_101af6a0;
}
