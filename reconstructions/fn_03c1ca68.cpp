extern "C" void fn_03c1c9e4(void *);
extern "C" int data_105a3f58;
extern "C" int data_105a3f50;

extern "C" void *fn_03c1ca68(void)
{
  int needsInit = data_105a3f50 == 0;
  if (needsInit) {
    int one = 1;
    data_105a3f50 = one;
    fn_03c1c9e4(&data_105a3f58);
  }
  return &data_105a3f58;
}
