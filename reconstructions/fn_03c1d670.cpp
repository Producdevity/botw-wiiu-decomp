extern "C" void fn_03c1d5ec(void *);
extern "C" int data_10598388;
extern "C" int data_105a4398;

extern "C" void *fn_03c1d670(void)
{
  int needsInit = data_105a4398 == 0;
  if (needsInit) {
    int one = 1;
    data_105a4398 = one;
    fn_03c1d5ec(&data_10598388);
  }
  return &data_10598388;
}
