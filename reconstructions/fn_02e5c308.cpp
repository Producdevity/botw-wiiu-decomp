extern "C" void *fn_02da9ff8(void);
extern "C" int fn_02de33e8(void *, void *);
extern "C" int fn_033a2c28(void);
extern "C" void *data_104640d8;

extern "C" int fn_02e5c308(void)
{
  int sp8;
  void *object;
  if (fn_033a2c28() == 0 || (object = fn_02da9ff8()) == 0 || *((unsigned char *)object + 0x7C) == 0) {
    int result = 0;
    return result;
  }
  if (data_104640d8 == 0) {
    return 1;
  }
  sp8 = 3;
  return fn_02de33e8(data_104640d8, &sp8);
}
