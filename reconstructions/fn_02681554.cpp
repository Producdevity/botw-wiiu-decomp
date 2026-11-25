extern "C" void *fn_02b32b50(void *, void *, void *, void *);
extern "C" void *fn_02680294(void *, void *, void *, void *, void *);
extern "C" void *fn_025975ac(void *);

extern "C" void fn_02681554(void **self)
{
  void *spC;
  void *sp10;
  void *sp8;
  sp8 = (void *)(-1);
  fn_02b32b50(*self, &spC, &sp10, &sp8);
  fn_02680294(self, spC, sp10, sp8, (void *)(-1));
  fn_025975ac(self);
}
